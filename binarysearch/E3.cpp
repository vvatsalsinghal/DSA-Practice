// lc34
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int st = 0, end = nums.size() - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target > nums[mid]) {
                st = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }
            else {
                first = mid;
                end = mid - 1;   // keep searching LEFT
            }
        }

        // Reset
        st = 0;
        end = nums.size() - 1;

        // Find last occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target > nums[mid]) {
                st = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }
            else {
                last = mid;
                st = mid + 1;    // keep searching RIGHT
            }
        }

        return {first, last};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {-1, 0, 3,3, 5, 9, 12};
    int target = 3;

    vector<int> result = sol.searchRange(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}