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
using namespace std;

/*
begin:  10:07
end:    10:44
Time Complexity:    O(n * m)
Space Complexity:   O(n)
Method: 动态规划方法，注意状态转移方程中的dp代表的是已经被剪开的绳子能够代表的最大长度。
*/

class Solution {
public:
    int cuttingRope(int n) {
        if (2 == n) return 1;
        if (3 == n) return 2;
        
        vector<int> dp(n+1, 0);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for (size_t i = 4; i <= n; i++)
        {
            int MAX = 0;
            for (size_t j = i - 1; j >= i/2; j--)
            {
                MAX = max(MAX, dp[i-j]*dp[j]);
            }
            dp[i] = MAX;
        }
        return dp[n];
    }
};

int main()
{
   
   return 0;
}
