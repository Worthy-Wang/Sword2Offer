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
begin:  17:27
end:    17:42
Time Complexity:    O(N^2)
Space Complexity:   O(N^2)
Method: 动态规划经典题型
*/

class Solution
{
public:
    int maxValue(vector<vector<int>> &grid)
    {
        int M = grid.size(), N = grid[0].size();
        vector<vector<int>> dp(M, vector<int>(N));
        dp[0][0] = grid[0][0];
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                if (i > 0 && j > 0)
                    dp[i][j] = grid[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
                else if (i > 0)
                    dp[i][j] = grid[i][j] + dp[i - 1][j];
                else //j > 0
                    dp[i][j] = grid[i][j] + dp[i][j - 1];
            }
        }
        return dp[M - 1][N - 1];
    }
};

int main()
{

    return 0;
}
