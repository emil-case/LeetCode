#include<iostream>
#include<vector>
#include<set>

using namespace std;



class Solution {
public:
    bool isHappy(int n) {
        int actualNumber = n;
        set<int> reachedNumbers;

        while (true) {
            if (reachedNumbers.find(actualNumber) != reachedNumbers.end()){
                return false;
            } else {
                reachedNumbers.insert(actualNumber);
                int nextNumber = processNumber(actualNumber);
                if (nextNumber == 1) {
                    return true;
                } else {
                    actualNumber = nextNumber;
                }
            }
        }
    }
private:
    int processNumber(int n) {
        int sum = 0;
        int actualNumber = n;
        while (actualNumber != 0) {
            int nextDigit = actualNumber % 10;
            sum += nextDigit * nextDigit;
            actualNumber = actualNumber / 10;
        }
        return sum;
    }
};

int main() {
    cout << Solution().isHappy(19) << endl;
    cout << Solution().isHappy(2) << endl;
    
    return 0;
}