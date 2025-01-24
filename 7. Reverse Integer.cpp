#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversedNumber;
        int actual;
        if (x < 0) {
            actual = -x;
        } else {
            actual = x;
        }

        while (actual != 0) {
            int nextDigit = actual % 10;
            if (reversedNumber > 214748364 && nextDigit > 7) {
                return 0;
            }
            reversedNumber = reversedNumber * 10 + nextDigit;
            actual = actual / 10;
        }

        int result = 0;
        
        if (x < 0) {
            result = -reversedNumber;
        } else {
            result = reversedNumber;
        }

        return result;
    }
};

int main() {
    
    cout << Solution().reverse(123) << endl;
    cout << Solution().reverse(-123) << endl;
    cout << Solution().reverse(120) << endl;

    return 0;
}