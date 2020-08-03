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
begin:  11:44
end:    11:46
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 辅助哈希表法
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for (auto& e: nums)
            hashmap[e]++;
        for (auto& e: hashmap)
            if (e.second > (nums.size()/2))
                return e.first;
        return -1;
    }
};

int main()
{
   
   return 0;
}
