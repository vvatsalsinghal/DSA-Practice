// #sort color
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            bool isswap = false;

            for (int j = 0; j < n - i - 1; j++) 
            {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    isswap = true;
                }
            }

            if (!isswap) return nums;
        }

        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.sortColors(nums);

    cout << "Sorted array:   ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}