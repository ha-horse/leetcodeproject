#include <iostream>
#include <string>


struct RomanInt{
    char roman;
    int number;
};

struct RomanPair {
    RomanInt first;
    RomanInt second;
};


class Solution {
public:
    int romanToInt(std::string s) {
        int num = 0;
        RomanInt roman_I = {'I', 1};
        RomanInt roman_V = {'V', 5};
        RomanInt roman_X = {'X', 10};
        RomanInt roman_L = {'L', 50};
        RomanInt roman_C = {'C', 100};
        RomanInt roman_D = {'D', 500};
        RomanInt roman_M = {'M', 1000};
        RomanPair roman_pair_I = {{'V', 4}, {'X', 9}};
        RomanPair roman_pair_X = {{'L', 40},{'C', 90}};
        RomanPair roman_pair_C = {{'D', 400},{'M', 900}};

        if (s[0] == 'I') {
            num = func(s, roman_I, roman_pair_I.first, roman_pair_I.second);
        }
        if (s[0] == 'X') {
            num = func(s, roman_X, roman_pair_X.first, roman_pair_X.second);
        }
        if (s[0] == 'C') {
            num = func(s, roman_C, roman_pair_C.first, roman_pair_C.second);
        }

        if (s[0] == 'V') {
            for (int i = 0; i < s.size(); i++)
            {
                char temp = s[i];
                if (temp == 'I') num += 1;
            }
            
        }
        if (s[0] == 'L') {
            for (int i = 0; i < s.size(); i++)
            {
                char temp = s[i];
                if (temp == 'I') num += 1;
                if (temp == 'V') num += 5;
                if (temp == 'X') num += 10;
            }
        }
        if (s[0] == 'D') {
            for (int i = 0; i < s.size(); i++)
            {
                char temp = s[i];
                if (temp == 'I') num += 1;
                if (temp == 'V') num += 5;
                if (temp == 'X') num += 10;
                if (temp == 'L') num += 50;
                if (temp == 'C') num += 100;
            }
        }
        if (s[0] == 'M') {
            for (int i = 0; i < s.size(); i++)
            {
                char temp = s[i];
                if (temp == 'I') num += 1;
                if (temp == 'V') num += 5;
                if (temp == 'X') num += 10;
                if (temp == 'L') num += 50;
                if (temp == 'C') num += 100;
                if (temp == 'D') num += 500;
                if (temp == 'M') num += 1000;
            }
        }
        return num;
    }

    int func(std::string s, RomanInt begin, RomanInt first, RomanInt second){
        int num = 0;
        char temp;
        for (int i = 0; i < s.size(); i++){
            temp = s[i];
            if (temp == begin.roman) {
                if (s[i+1] == first.roman) {
                    num += first.number;
                    i++;
                }
                else if (s[i+1] == second.roman) {
                    num += second.number;
                    i++;
                }
                else num += begin.number;
            }
        }
        return num;
    }
};

int main(){
    Solution solu;
    std::string s1("IV");
    int num1 = solu.romanToInt(s1);
    std::cout << "num1 = " << num1 << std::endl;
    std::string s2("IX");
    int num2 = solu.romanToInt(s2);
    std::cout << "num2 = " << num2 << std::endl;
    std::string s3("III");
    int num3 = solu.romanToInt(s3);
    std::cout << "num3 = " << num3 << std::endl;
    return 0;
}
