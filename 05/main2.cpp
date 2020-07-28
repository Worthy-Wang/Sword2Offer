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
using namespace std;

/*
begin:  15:42
end:    15:46
Time Complexity:    O(N)
Space Complexity:   O(N)
Method:利用C++特性，重新创造一个数组
*/

class Solution {
public:
    string replaceSpace(string s) {
        string ans;
        for (auto& e: s)
        {
            if (' ' == e)
            {
                ans.push_back('%');
                ans.push_back('2');
                ans.push_back('0');
            }
            else
                ans.push_back(e);
        }
        return ans;
    }
};

int main()
{
   
   return 0;
}
