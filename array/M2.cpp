#include <iostream>
#include <vector>
#include <algorithm> // for print helper if needed

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                mid++;
            } 
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    // 1. Create a test vector
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    // 2. Instantiate the Solution class
    Solution sol;
    
    // 3. Call the function (modifies vector in-place)
    sol.sortColors(nums);
    
    // 4. Print the result to the VS Code terminal
    cout << "Sorted Colors: [ ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}