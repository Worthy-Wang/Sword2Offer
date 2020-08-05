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
begin:   11：45
end:     14:07
Time Complexity:  O(logn)
Space Complexity: O(1)
Method:  重点考察字符串的操作
*/

class Solution {
public:
    bool isInt(string& s, int& i)
    {
        int temp = i;
        while (i < s.size() && '0'<= s[i] && s[i]<='9')
            i++;
        return i != temp;
    }

    bool isNumber(string s) {
        if (s.empty())
            return false;
        int i = 0, n = s.size();
        //跳过空格
        while (s[i] == ' ')
             i++;
        //跳过+ - 号
        if (s[i] == '+' || s[i] == '-')
            i++;
        bool match1 = isInt(s, i);
        //先判断. 再判断e
        if (s[i] == '.')
        {
            i++;
            bool match2 = isInt(s, i);
            if (!match1 && !match2)
                return false;
        }else
        {
            if (!match1)
                return false;
        }
        if (s[i] == 'e')
        {
            i++;
            if (s[i] == '+' || s[i] == '-')
                i++;
            if (!isInt(s, i))
                return false;
        }
        //跳过后面的空格
        while (i < n)
        {
            if (s[i] != ' ')
                return false;
            i++;
        }
        return true;
    }
};
int main()
{
   cout << 3. << endl;
   return 0;
}
