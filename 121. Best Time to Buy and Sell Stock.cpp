#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> maxNumberFrom(prices.size());
        maxNumberFrom[prices.size() - 1] = prices.back();
        for (int i = prices.size() - 2; i >= 0; i--) {
            if (prices[i] > maxNumberFrom[i + 1]) {
                maxNumberFrom[i] = prices[i];
            } else {
                maxNumberFrom[i] = maxNumberFrom[i + 1];
            }
        }
        int maxProfit = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (maxNumberFrom[i + 1] - prices[i] > maxProfit) {
                maxProfit = maxNumberFrom[i + 1] - prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices_1 = {7, 1, 5, 3, 6, 4};
    cout << Solution().maxProfit(prices_1) << endl;

    vector<int> prices_2 = {7, 6, 4, 3, 1};
    cout << Solution().maxProfit(prices_2) << endl;
    return 0; 
}