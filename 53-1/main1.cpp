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
begin:  16:30
end:    17:51
Time Complexity:  O(logN)
Space Complexity: O(1)
Method:  经典二分法的变形
*/

class Solution
{
public:
   int lower_bound(vector<int> &nums, int target)
   {
      int l = 0, r = nums.size();
      while (l < r)
      {
         int mid = (l + r) >> 1;
         if (target <= nums[mid])
            r = mid;
         else
            l = mid + 1;
      }
      return l;
   }

   int upper_bound(vector<int> &nums, int target)
   {
      int l = 0, r = nums.size();
      while (l < r)
      {
         int mid = (l + r) >> 1;
         if (target >= nums[mid])
            l = mid + 1;
         else
            r = mid;
      }
      return r - 1;
   }

   vector<int> searchRange(vector<int> &nums, int target)
   {
      int l = lower_bound(nums, target);
      int r = upper_bound(nums, target);
      if (l > r)
         return {-1, -1};
      else
         return {l, r};
   }
};


int main()
{
   return 0;
}
