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
begin:   9:07
end:     9:22
Time Complexity:  O(N)
Space Complexity: O(1)
Method:  二分法变形题，看到排序数列中找某一个数字应该可以想到
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = 0, r = nums.size() -1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (mid == nums[mid])
                l = mid + 1;
            else 
                r = mid - 1;
        }
        return l;
    }
};

int main()
{
   
   return 0;
}
