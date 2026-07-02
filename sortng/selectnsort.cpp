#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> selectsort(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            int smallestIdx = i;

            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[smallestIdx])
                {
                    smallestIdx = j;
                }
            }

            swap(nums[i], nums[smallestIdx]);
        }

        return nums;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {5, 4, 3, 2, 1};

    vector<int> result = obj.selectsort(nums);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}