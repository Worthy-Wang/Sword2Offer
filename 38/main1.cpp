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
begin:  10:20
end:    11:22
Time Complexity:    O(N!)
Space Complexity:   O(N^2)
Method: 全排列标准模板
*/

class Solution {
public:
    void recur(string& s, int begin, set<string>& sets)
    {
        if (begin == s.size())
        {
            sets.insert(s);
            return;
        }
        for (int i = begin; i < s.size(); i++)
        {
            swap(s[begin], s[i]);
            recur(s, begin + 1, sets);
            swap(s[begin], s[i]);
        }
    }

    vector<string> permutation(string s) {
        set<string> sets;
        recur(s, 0, sets);
        vector<string> ans(sets.begin(), sets.end());
        return ans;
    }
};

int main()
{
   
   return 0;
}
