// lc 540
#include <iostream>
#include <vector>

class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        // Loop until pointers converge on the single element
        while (left < right) {
            int mid = left + (right - left) / 2;

            // mid ^ 1 gives:
            // mid + 1 if mid is even
            // mid - 1 if mid is odd
            if (nums[mid] == nums[mid ^ 1]) {
                // Pair is valid, single element must be to the right
                left = mid + 1;
            } else {
                // Pattern is broken, single element is at mid or to the left
                right = mid;
            }
        }

        // left == right, points directly to the unique element
        return nums[left];
    }
};

int main() {
    Solution solver;

    // Example 1: Single element in the middle
    std::vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    std::cout << "Test 1 [1, 1, 2, 3, 3, 4, 4, 8, 8]: " 
              << solver.singleNonDuplicate(nums1) << " (Expected: 2)\n";

    // Example 2: Single element near the end
    std::vector<int> nums2 = {3, 3, 7, 7, 10, 11, 11};
    std::cout << "Test 2 [3, 3, 7, 7, 10, 11, 11]: " 
              << solver.singleNonDuplicate(nums2) << " (Expected: 10)\n";

    // Example 3: Only one element
    std::vector<int> nums3 = {1};
    std::cout << "Test 3 [1]: " 
              << solver.singleNonDuplicate(nums3) << " (Expected: 1)\n";

    return 0;
}