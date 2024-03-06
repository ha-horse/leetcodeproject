#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x > 0 && x%10 != 0) {
            vector<int> number;
            int length = number.size();
            getNum(x, number);
            for (int i = 0; i < length/2; i++) {
                if (number[i] != number[length - i - 1]) return false;
            }
            return true;
        }
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

    return 0;
}
