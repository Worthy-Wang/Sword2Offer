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
begin:  9:41
end:    9:56
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 利用hashsets巧妙去重
*/

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        unordered_set<int> sets;
        int joker = 0, Max = -1, Min = 14;
        for (auto& e: nums)
        {
            if (0 == e) joker++;
            else if (sets.find(e) == sets.end())
            {
                sets.insert(e);
                Max = max(Max, e);
                Min = min(Min, e);
            }
            else    
                return false;
        }
        return (5 >= Max - Min + 1);
    }
};

int main()
{
   
   return 0;
}
