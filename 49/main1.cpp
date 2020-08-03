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
begin:  10:06
end:    10:53
Time Complexity:
Space Complexity:
Method: 暴力解法，此方法超时
*/

class Solution {
public:
    bool isUgly(int num)
    {
        while (num % 2 == 0)
            num /= 2;
        while (num % 3 == 0)
            num /= 3;
        while (num % 5 == 0)
            num /= 5;
        return (num == 1) ? true : false;
    }

    int nthUglyNumber(int n) {
        if (n <= 0)
            return 0;
        int cnt = 0;
        int number = 0;
        while (cnt < n)
        {
            number++;
            if (isUgly(number))
                cnt++;
        }
        return number;
    }
};

int main()
{
   
   return 0;
}
