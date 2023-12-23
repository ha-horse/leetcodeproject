#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int add1, add2;
        int add1_index = 0, add2_index = 0;
        vector<int> index(2);
        for (auto num : nums) {
            if (num < target) {
                add1 = num;
                add2 = target - add1;
                for (auto num_ : nums) {
                    if (num_ == add2 && num_!=add1) {
                        index[0] = add1_index;
                        index[1] = add2_index;
                        return index;
                    }
                    add2_index ++;
                }
            }
            add1_index ++;
        }
        return index;
    }
};


int main() {
    vector<int> out1, out2;
    vector<int> arr1, arr2;

    arr1.push_back(2);
    arr1.push_back(7);
    arr1.push_back(11);
    arr1.push_back(15);

    arr2.push_back(3);
    arr2.push_back(2);
    arr2.push_back(4);

    Solution soluv;
    out1 = soluv.twoSum(arr1, 9);
    for (auto out : out1) {
        std::cout << "out1 = " << out << std::endl;
    }
    // out2 = soluv.twoSum(arr2, 6);
    // for (auto out : out2) {
    //     std::cout << "out2 = " << out << std::endl;
    // }
    return 0;
}

