// next permutation 31
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // 1. Find pivot
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // 2. Find swap target if pivot exists
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    // 3. Reverse suffix
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {2, 3, 6, 5, 4, 1};

    cout << "Original: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    nextPermutation(nums);

    cout << "Next:     ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    return 0;
}