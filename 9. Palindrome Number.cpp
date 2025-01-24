#include<iostream>
#include<vector>

using namespace std;

class Solution {
public: 
    bool isPalindrome(long x) {
        if (x < 0) {
            return false;
        }
        long actualNumber = x;
        long reverseNumber = 0;
        while (actualNumber != 0) {
            long nextDigit = actualNumber % 10;
            reverseNumber = reverseNumber * 10 + nextDigit;
            actualNumber = actualNumber / 10;
        }
        return x == reverseNumber;
    }
};

int main() {
    
    cout << Solution().isPalindrome(121) << endl;
    cout << Solution().isPalindrome(-121) << endl;
    cout << Solution().isPalindrome(10) << endl;

    
    return 0;
}