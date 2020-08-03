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
begin:  13:26
end:    13:33
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 双指针法
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            if (nums[i] + nums[j] == target)
                return {nums[i], nums[j]};
            else if (nums[i] + nums[j] < target)
                i++;
            else   
                j--;
        }
        return {nums[i], nums[j]};
    }
};

int main()
{
   
   return 0;
}
