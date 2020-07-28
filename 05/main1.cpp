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
begin:  15:20
end:    15:42
Time Complexity: 
Space Complexity:
Method:巧妙使用正则表达式求解
*/

class Solution {
public:
    string replaceSpace(string s) {
        return regex_replace(s, regex(" "), "%20");
    }
};

int main()
{
   
   return 0;
}
