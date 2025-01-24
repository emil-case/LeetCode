#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> openedBracketsOrder;
        for (char bracket : s) {
            if (bracket == '{' || bracket == '[' || bracket == '(') {
                openedBracketsOrder.push_back(bracket);
            } else {
                if (!openedBracketsOrder.empty() && ((openedBracketsOrder.back() == '{' && bracket == '}') || (openedBracketsOrder.back() == '(' && bracket == ')') || (openedBracketsOrder.back() == '[' && bracket == ']'))) {
                    openedBracketsOrder.pop_back();
                } else {
                    return false;
                }
            }
        }
        return openedBracketsOrder.empty();
    }
};

int main(){

    cout << Solution().isValid("]") << endl;
    cout << Solution().isValid("()") << endl;
    cout << Solution().isValid("()[]{}") << endl;
    cout << Solution().isValid("(]") << endl;
    cout << Solution().isValid("([])") << endl;
    
    return 0;
}