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
begin:  9:10
end:    9:55
Time Complexity:  O(N)
Space Complexity: O(N)
Method:  滑动窗口经典例题
*/  

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> hashset;
        int left = 0;
        size_t maxLen = 0;
        for (int i = 0; i < s.size(); i++)
        {
            while (hashset.find(s[i]) != hashset.end())
                hashset.erase(s[left++]);
            hashset.insert(s[i]);
            maxLen = max(maxLen, hashset.size());
        }
        return maxLen;
    }
};

int main()
{
   
   return 0;
}
