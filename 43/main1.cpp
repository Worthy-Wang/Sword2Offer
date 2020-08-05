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
begin:  8:45
end:    10:06
Time Complexity:    O(logn)     
Space Complexity:   O(1)
Method: 数学归纳法
*/
class Solution {
public:
    int countDigitOne(int n) {
        long res = 0;
        long i = 1;//i代表指向的位数，如个位，十位
        while (n / i)
        {
            long high = n / (10*i);
            long low = n - ((n/i)*i);
            long cur = (n/i)%10;
            if (0 == cur)   res += high * i;
            else if (1 == cur)   res += high*i + low + 1;
            else 
                res += high * i + i;
            i *= 10;
        }
        return res;
    }
};

int main()
{
   
   return 0;
}
