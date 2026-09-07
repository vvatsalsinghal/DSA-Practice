// two sum
#include <iostream>

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            if (map.find(needed) != map.end()) {
                return {map[needed], i};
            }

            map[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;
    
    // Test case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    // Print the result
    if (!result.empty()) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}