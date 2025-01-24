#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum = INT_MIN;
        int currentMax = 0;

        for (int element : nums) {
            currentMax = max(currentMax + element, element);
            maximum = max(maximum, currentMax);
        }
        return maximum;
    }
};

int main() {
    
    vector<int> input_1 = {-2,1,-3,4,-1,2,1,-5,4};
    cout << Solution().maxSubArray(input_1) << endl;
    vector<int> input_2 = {1};
    cout << Solution().maxSubArray(input_2) << endl;
    vector<int> input_3 = {5,4,-1,7,8};
    cout << Solution().maxSubArray(input_3) << endl;
    
    return 0;
}