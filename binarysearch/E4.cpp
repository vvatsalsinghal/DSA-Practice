// lc33
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }

            // Case 1: Left half is sorted
            if (nums[low] <= nums[mid])
            {
                // Check if target lies within the sorted left half
                if (nums[low] <= target && target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            // Case 2: Right half is sorted
            else
            {
                // Check if target lies within the sorted right half
                if (nums[mid] < target && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    int result = sol.search(nums, target);

    cout << result << endl;

    return 0;
}