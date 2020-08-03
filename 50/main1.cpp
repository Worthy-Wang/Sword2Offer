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
begin:  11:37
end:    11:45
Time Complexity:    O(N)
Space Complexity:   O(1)    哈希表最多开辟256个char空间，可以看成常数复杂度
Method: 哈希表
*/

class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, int> hashmap;
        for (int i = 0; i < s.size(); i++)
            hashmap[s[i]] ++;
        for (int i = 0; i < s.size(); i++)
        {
            if (hashmap[s[i]] == 1)
                return s[i];
        }
        return ' ';
    }
};

int main()
{
   
   return 0;
}
