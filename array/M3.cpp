// 169 majority element
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        
        // Phase 1: Find the candidate through "canceling out"
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};

int main() {
    Solution sol;
    
    // Test case
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    int result = sol.majorityElement(nums);
    
    cout << "The majority element is: " << result << endl;
    
    return 0;
}