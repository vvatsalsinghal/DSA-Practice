#include <iostream>
#include <vector>
#include <algorithm>
// two sum
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // 1. Pair values with their original indices
        vector<pair<int, int>> numsWithIndex;
        for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({nums[i], i});
        }
        
        // 2. Sort based on values
        sort(numsWithIndex.begin(), numsWithIndex.end());

        // 3. Two pointers
        int left = 0, right = n - 1;
        
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;
            
            if (sum == target) {
                return {numsWithIndex[left].second, numsWithIndex[right].second};
            } 
            else if (sum < target) {
                left++;
            } 
            else {
                right--;
            }
        }
        
        return {};
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

// // two sum
// #include <iostream>

// #include <vector>
// #include <unordered_map>

// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> map;

//         for (int i = 0; i < nums.size(); i++) {
//             int needed = target - nums[i];

//             if (map.find(needed) != map.end()) {
//                 return {map[needed], i};
//             }

//             map[nums[i]] = i;
//         }

//         return {};
//     }
// };

// int main() {
//     Solution solution;
    
//     // Test case
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> result = solution.twoSum(nums, target);

//     // Print the result
//     if (!result.empty()) {
//         cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
//     } else {
//         cout << "No two sum solution found." << endl;
//     }

//     return 0;
// }