// lc81
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return true;
            }

            // Handle ambiguity caused by duplicates
            if (nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                low++;
                high--;
                continue;
            }

            // Case 1: Left half is sorted
            if (nums[low] <= nums[mid])
            {
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

        return false;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {3, 1, 2, 3, 3, 3, 3};
    int target = 1;

    bool result = sol.search(nums, target);

    cout << boolalpha << result << endl;

    return 0;
}