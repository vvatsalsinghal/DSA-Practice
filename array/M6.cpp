// #stock buy sell 121
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int n = prices.size();
        
        // Track the minimum price up to each day
        vector<int> minPrices(n);
        minPrices[0] = prices[0];
        
        // --- FIRST FOR LOOP ---
        // Build our history of the cheapest buying price for every single day
        for (int i = 1; i < n; i++) {
            minPrices[i] = min(minPrices[i - 1], prices[i]);
        }
        
        int maxProfit = 0;
        
        // --- SECOND FOR LOOP ---
        // Walk through the array again and calculate the best profit using our precomputed mins
        for (int i = 0; i < n; i++) {
            int currentProfit = prices[i] - minPrices[i];
            maxProfit = max(maxProfit, currentProfit);
        }
        
        return maxProfit;
    }
};

int main() {
    Solution sol;
    
    // Test case (Classic LeetCode example)
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    int result = sol.maxProfit(prices);
    
    cout << "The maximum profit is: " << result << endl;
    
    return 0;
}