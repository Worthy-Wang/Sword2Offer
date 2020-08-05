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
begin:  10:50
end:    11:12
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 通过设立最小值与最大值的方式来进行遍历
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;
        int Max = 0, Min = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            Max = max(prices[i] - Min, Max);
            Min = min(Min, prices[i]);
        }
        return Max;
    }
};

int main()
{
   
   return 0;
}
