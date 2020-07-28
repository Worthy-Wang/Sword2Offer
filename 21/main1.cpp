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
begin:  14:21
end:    14:33
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 双指针法(也可以说是快慢指针法)
*/

class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[j] & 0x1)
                swap(nums[i++], nums[j++]);
            else
                j++;
        }
        return nums;
    }
};

int main()
{
   
   return 0;
}
