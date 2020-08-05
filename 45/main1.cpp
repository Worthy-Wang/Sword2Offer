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
begin:  11:27   
end:    11:44
Time Complexity:    O(nlogn)
Space Complexity:   O(n)
Method: 此题主要考察如何对于字符串进行排序
*/

class Solution {
public:
    string minNumber(vector<int>& nums) {
        string res;
        vector<string> svec;
        for (auto& e: nums)
            svec.push_back(to_string(e));
        sort(svec.begin(), svec.end(), [](string& s1, string& s2){
            return s1 + s2 < s2 + s1;
        });
        for (auto& e: svec)
            res += e;
        return res;
    }
};

int main()
{
   
   return 0;
}
