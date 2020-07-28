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
using namespace std;

/*
begin:  11:40
end:    12:23    
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 桶排序思想，只需要找出一个重复的即可。
*/

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        for (size_t i  = 0; i < nums.size(); i++)
        {
            while (i != nums[i])
            {
                if (nums[i] != nums[nums[i]])
                    swap(nums[i], nums[nums[i]]);
                else 
                    return nums[i];
            }
        }
        return -1;
    }
};

int main()
{
   
   return 0;
}
