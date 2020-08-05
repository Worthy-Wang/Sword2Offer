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
begin:  8:57
end:    9:38
Time Complexity:    O(nlogn)
Space Complexity:   O(1)
Method: 常规编程法
*/

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int num0 = 0, num_space = 0;
        sort(nums.begin(), nums.end());
        //统计0
        int i = 0;
        for (; i < nums.size(); i++)
        {
            if (0 == nums[i])
                num0++;
            else
                break;
        }
        //统计间隔
        for (i++; i < nums.size(); i++)
        {
            if (nums[i] - nums[i-1] != 1)
                num_space = nums[i] - nums[i-1] - 1;
            if (nums[i] == nums[i-1])
                return false;
            if (num_space > num0)
                return false;
        }
        return num_space <= num0 ? true : false;
    }
};

int main()
{
   
   return 0;
}
