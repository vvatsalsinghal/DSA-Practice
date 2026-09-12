// 128 leetcode logest consecutive seq
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> numSet(nums.begin(), nums.end());

        int maxStreak = 0;

        for (int num : numSet) {
            // Check if num is the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Expand forward
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentStreak++;
                }

                maxStreak = max(maxStreak, currentStreak);
            }
        }

        return maxStreak;
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution obj;

    cout << obj.longestConsecutive(nums) << endl;

    return 0;
}