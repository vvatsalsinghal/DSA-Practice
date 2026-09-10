// rearrange array element by sign 2149
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> pos(n), neg(n);
        int cntp = 0, cntn = 0;
        int j = 0, k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                cntp++;
                pos[j] = nums[i];
                j++;
            } else {
                cntn++;
                neg[k] = nums[i];
                k++;
            }
        }

        int indx = 0;
        for (int j = 0; j < cntp; j++) {
            nums[indx] = pos[j];
            indx += 2;
        }
        int indx2 = 1;
        for (int k = 0; k < cntn; k++) {
            nums[indx2] = neg[k];
            indx2 += 2;
        }

        return nums;
    }
};

int main() {
    Solution sol;
    
    // Test case
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    
    vector<int> result = sol.rearrangeArray(nums);

    // Print the result
    cout << "Rearranged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}