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
begin:  15:22
end:    16:21
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 经典atoi实现题目
*/

class Solution
{
public:
    int myAtoi(string str)
    {
        int isPositive = 1;
        int i = 0;
        int n = str.size();
        long long res = 0;
        while (str[i] == ' ')
            i++;
        if (str[i] == '+')
            i++;
        else if (str[i] == '-')
        {
            i++;
            isPositive = -1;
        }
        while (i < n)
        {
            if (str[i] <= '9' && str[i] >= '0')
            {
                res *= 10;
                res += str[i] - '0';
                i++;
            }
            else
                break;

            if (res*isPositive < INT_MIN)
                return INT_MIN;
            else if (res*isPositive > INT_MAX)
                return INT_MAX;
        }
        return res*isPositive;
    }
};

int main()
{
    Solution s;
    s.myAtoi("  -42");

    return 0;
}
