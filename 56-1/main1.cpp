#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <memory>
#include <limits>
#include <list>
#include <regex>
#include <functional>
#include <math.h>
#include <unordered_set>
using namespace std;

/*
begin:  10:52
end:    11:45
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 此题主要考察位运算中的异或运算
*/

class Solution
{
public:
    vector<int> singleNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (auto &e : nums)
            ans ^= e;
        int bit1 = 1;
        while ((bit1 & ans) != bit1)
            bit1 <<= 1;
        int a = 0, b = 0;
        for (auto &e : nums)
            if ((e & bit1) == bit1)
                a ^= e;
            else
                b ^= e;
        return {a, b};
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,5,2};
    s.singleNumbers(nums);
    return 0;
}
