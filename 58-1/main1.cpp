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
begin:  14:53
end:    15:09
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 运用C++流操作符特性
*/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res, cur;
        while (ss >> cur)
            res = cur + ' ' + res;
        return res.substr(0, res.size()-1);
    }
};

int main()
{
   
   return 0;
}
