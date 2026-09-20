// lc153
#include <iostream>
#include <vector>

class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        // Loop until the search space shrinks to a single element
        while (left < right) {
            int mid = left + (right - left) / 2;

            // If mid is greater than right, the drop (minimum) is strictly to the right
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } 
            // Otherwise, mid could be the minimum, or the minimum is to the left
            else {
                right = mid;
            }
        }

        // left == right, pointing to the minimum element
        return nums[left];
    }
};

int main() {
    Solution solver;

    // Example 1: Standard rotated array
    std::vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    std::cout << "Test 1 [4, 5, 6, 7, 0, 1, 2]: Min = " 
              << solver.findMin(nums1) << " (Expected: 0)\n";

    // Example 2: Rotated array with length 2
    std::vector<int> nums2 = {2, 1};
    std::cout << "Test 2 [2, 1]: Min = " 
              << solver.findMin(nums2) << " (Expected: 1)\n";

    // Example 3: Already sorted array (rotated n times)
    std::vector<int> nums3 = {11, 13, 15, 17};
    std::cout << "Test 3 [11, 13, 15, 17]: Min = " 
              << solver.findMin(nums3) << " (Expected: 11)\n";

    return 0;
}