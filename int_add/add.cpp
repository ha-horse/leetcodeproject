#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int add1, add2;
        vector<int> index(2);

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < target) {
                add1 = nums[i];
                add2 = target - add1;
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] == add2) {
                        index[0] = i;
                        index[1] = j;
                        return index;
                    }
                }
            }
        }
        return index;
    }
};


int main() {
    vector<int> out1, out2, out3;
    vector<int> arr1, arr2, arr3;

    arr1.push_back(2);
    arr1.push_back(7);
    arr1.push_back(11);
    arr1.push_back(15);

    arr2.push_back(3);
    arr2.push_back(2);
    arr2.push_back(4);

    arr3.push_back(3);
    arr3.push_back(3);

    Solution soluv;
    out1 = soluv.twoSum(arr1, 9);
    for (auto out : out1) {
        std::cout << "out1 = " << out << std::endl;
    }
    out2 = soluv.twoSum(arr2, 6);
    for (auto out : out2) {
        std::cout << "out2 = " << out << std::endl;
    }
    out3 = soluv.twoSum(arr3, 6);
    for (auto out : out3) {
        std::cout << "out3 = " << out << std::endl;
    }
    return 0;
}

