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
using namespace std;

/*
begin:  9:06
end:    9:19
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 动态规划解决，与斐波那契数列完全相同，同样用递归也会超时
*/
class Solution {
public:
    int numWays(int n) {
        if (0 == n) return 1;
        else if (1 == n) return 1;
        else 
        {
            int dp0 = 1, dp1 = 1, dpi = 0;
            for (size_t i  = 2; i <= n; i++)
            {
                dpi = (dp0 + dp1) % 1000000007;
                dp0 = dp1;
                dp1 = dpi;
            }
            return dpi;
        }
    }
};

int main()
{
   
   return 0;
}
