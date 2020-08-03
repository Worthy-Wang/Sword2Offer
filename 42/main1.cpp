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
begin:  15:20
end:    15:27
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 动态规划
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty())   return -1;
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        int MAX = dp[0];
        for (int i = 1; i < nums.size(); i++)
        {
            dp[i] = max(nums[i], dp[i-1] + nums[i]);
            if (dp[i] > MAX)
                MAX = dp[i];
        }
        return MAX;
    }
};

int main()
{
   
   return 0;
}
