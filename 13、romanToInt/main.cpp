#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        char temp;
        for (int i = 0; i < s.size(); i++){
            temp = s[i];
            if (temp == 'I') {
                if (s[i+1] == 'V') {
                    num += 4;
                    i++;
                }
                else if (s[i+1] == 'X') {
                    num += 9;
                    i++;
                }
                else num += 1;
            }
            //TODO
            // if (temp == 'X') {}
            // if (temp == 'C') {}
            // if (temp == 'V') {}
            // if (temp == 'L') {}
            // if (temp == 'D') {}
            // if (temp == 'M') {}
        }
        return num;
    }
};

int main(){
    Solution solu;
    string s1("IV");
    int num1 = solu.romanToInt(s1);
    cout << "num1 = " << num1 << endl;
    string s2("IX");
    int num2 = solu.romanToInt(s2);
    cout << "num2 = " << num2 << endl;
    string s3("III");
    int num3 = solu.romanToInt(s3);
    cout << "num3 = " << num3 << endl;
    return 0;
}
