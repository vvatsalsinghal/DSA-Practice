// maximum subarray 53
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getMaxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSoFar = nums[0];
        
        int bestStart = 0;
        int bestEnd = 0;
        int tempStart = 0; 
        
        for (int i = 1; i < nums.size(); i++) {
            // Start fresh or extend
            if (nums[i] > currentSum + nums[i]) {
                currentSum = nums[i];
                tempStart = i; // New subarray starting point
            } else {
                currentSum = currentSum + nums[i];
            }
            
            // Update global record and lock in boundaries
            if (currentSum > maxSoFar) {
                maxSoFar = currentSum;
                bestStart = tempStart;
                bestEnd = i;
            }
        }
        
        // Return the slice from bestStart to bestEnd
        return vector<int>(nums.begin() + bestStart, nums.begin() + bestEnd + 1);
    }
};

int main() {
    Solution sol;
    
    // Test case
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    vector<int> result = sol.getMaxSubArray(nums);
    
    cout << "The maximum subarray is: [ ";
    int totalSum = 0;
    for (int x : result) {
        cout << x << " ";
        totalSum += x;
    }
    cout << "]" << endl;
    cout << "Maximum Sum: " << totalSum << endl;
    
    return 0;
}