#include<iostream>
#include<vector> 
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> reachableNumbersWithIndex;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            reachableNumbersWithIndex[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) { 
            if (reachableNumbersWithIndex.find(target - nums[i]) != reachableNumbersWithIndex.end() && reachableNumbersWithIndex.find(target - nums[i])->second != i){
                result = {reachableNumbersWithIndex.find(target - nums[i])->second, i};
            }
        }
        return result;
    }

    void print(vector<int> toPrint) {
        for (int i = 0; i < toPrint.size() - 1; i++) {
            cout << toPrint[i] << ", ";
        }
        cout << toPrint[toPrint.size() - 1] << endl;
    }
};

int main() {
    vector<int> input_1 = {2,7,11,15};
    int target_1 = 9;
    Solution().print(Solution().twoSum(input_1, target_1));

    vector<int> input_2 = {3,2,4};
    int target_2 = 6;
    Solution().print(Solution().twoSum(input_2, target_2));

    vector<int> input_3 = {3,3};
    int target_3 = 6;
    Solution().print(Solution().twoSum(input_3, target_3));

    return 0;
}