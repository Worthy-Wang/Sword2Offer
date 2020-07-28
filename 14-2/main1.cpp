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
begin:
end:
Time Complexity:
Space Complexity:
Method:
*/
class Solution {
public:
    int cuttingRope(int n) {
        if (n < 2)  return 0;
        if (2 == n) return 1;
        if (3 == n ) return 2;
        if (4 == n ) return 4;

        long long ret = 1;
        while (n >= 5)
        {
            ret = ret * 3 % 1000000007;
            n -= 3;
        }
        return ret * n % 1000000007;
    }
};  

int main()
{
   
   return 0;
}
