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
begin:  11:52
end:    12:20
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 位操作的题目
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> bits(32);
        for (auto& e: nums)
        {
            int cnt = 0;
            while (e)
            {
                if (e & 0x1)
                    bits[cnt]++;
                e >>= 1;
                cnt++;
            }
        }
        for (auto& e: bits)
                e %= 3;
        int ans = 0;
        for (int i = 0; i < 32; i++)
            if (bits[i])
                ans += pow(2, i);
        return ans;
    }
};

int main()
{
   Solution s;
   vector<int> nums{3,4,3,3};
   cout << s.singleNumber(nums);
   return 0;
}
