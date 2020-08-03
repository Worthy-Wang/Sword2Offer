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
begin:  10:58
end:    11:33
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 动态规划 + 丑数 *2， * 3， *5，仍然是丑数
*/

class Solution {
public:
    int nthUglyNumber(int n) {
        if (n <= 0) return 0;
        vector<int> dp(n);
        dp[0] = 1;
        int a2 = 0, b3 = 0, c5 = 0;
        for (int i = 1; i < n; i++)
        {
            dp[i] = min(2*dp[a2], min(3*dp[b3], 5*dp[c5]));
            if (dp[i] == 2*dp[a2])
                a2++;
            if (dp[i] == 3*dp[b3])
                b3++;
            if (dp[i] == 5*dp[c5])
                c5++;
        }
        return dp[n-1];
    }   
};


int main()
{
   Solution s;
   cout << s.nthUglyNumber(10);
   return 0;
}
