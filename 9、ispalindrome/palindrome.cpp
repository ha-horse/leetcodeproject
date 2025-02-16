#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x > 0) {
            vector<int> number;
            getNum(x, number);
            int length = number.size();
            for (int i = 0; i < length / 2; i++) {
                if (number[i] == number[length - i - 1]) {
                    continue;
                } else 
                    return false;
            }
            if (x % 10 == 0) return false;
            return true;
        }
        if (x == 0)
            return true;
        return false;
    }

    void getNum(int x, vector<int> &vec){
        int qutoient = x;
        while(qutoient > 0) {
            int remainder;
            remainder = qutoient % 10;
            vec.push_back(remainder);
            qutoient = qutoient / 10;
        }
    }
};

int main(){
    Solution solu;
    bool flag;
    flag = solu.isPalindrome(121);
    if (flag) cout << "it is palind rome" << endl;
    if (!flag) cout << "it is not palind rome" << endl;

    flag = solu.isPalindrome(-121);
    if (flag) cout << "it is palind rome" << endl;
    if (!flag) cout << "it is not palind rome" << endl;

    flag = solu.isPalindrome(10);
    if (flag) cout << "it is palind rome" << endl;
    if (!flag) cout << "it is not palind rome" << endl;

    flag = solu.isPalindrome(123123);
    if (flag) cout << "it is palind rome" << endl;
    if (!flag) cout << "it is not palind rome" << endl;

    return 0;
}
