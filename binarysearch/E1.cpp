// lc704
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target > nums[mid]) {
                st = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }
            else {
                return mid;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int result = sol.search(nums, target);

    cout << result << endl;

    return 0;
}