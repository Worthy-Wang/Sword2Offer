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
begin:  10:46
end:    11:15
Time Complexity:    O(1)
Space Complexity:   O(1)
Method: 结合数学公式的贪心算法，当 n>=5 时，进行剪绳子才能获得最大值，另外应该多剪3才能获得最大值
*/

class Solution {
public:
    int cuttingRope(int n) {
        if (n < 2)  return 0;
        if (2 == n) return 1;
        if (3 == n ) return 2;
        if (4 == n ) return 4;

        int num3 = 0;
        while (n >= 5)
        {
            n -= 3;
            num3 ++;
        }
        int ret =  pow(3, num3) * n ;
        return ret;
    }
};  

int main()
{

   return 0;
}
