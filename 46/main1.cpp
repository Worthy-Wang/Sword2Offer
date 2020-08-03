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
using namespace std;

/*
begin:  16:30
end:    17:19
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 经典动态规划
*/

class Solution {
public:
    int translateNum(int num) {
        string s = to_string(num);
        if (s.size() < 2) 
            return 1;
        
        vector<int> dp(s.size() + 1);
        dp[0] = 1, dp[1] = 1;
        for (int i = 2; i <= s.size(); i++)
        {
            int pre = stoi(s.substr(i-2, 2));
            if (10 <= pre && pre <= 25)
                dp[i] = dp[i-1] + dp[i-2];
            else
                dp[i] = dp[i-1];
        }
        return dp[s.size()];
    }
};

int main()
{
   
   return 0;
}
