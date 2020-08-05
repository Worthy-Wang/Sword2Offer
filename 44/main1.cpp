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
end:    11:16
Time Complexity:  O(logN)
Space Complexity: O(1)
Method:  数学归纳法，主要考察与数字相关的操作
*/

class Solution {
public:
    int findNthDigit(int n) {
        long digit = 1;
        long count = 9;
        long start = 1;
        while (n > count)
        {
            n -= count;
            start *= 10;
            digit ++;
            count = 9 * pow(10, digit-1) * digit;
        }
        long sum = start + (n-1) / digit;
        int res = to_string(sum)[(n-1) % digit] - '0';
        return res;
    }
};

int main()
{
   Solution s;
   cout << s.findNthDigit(3);
   return 0;
}
