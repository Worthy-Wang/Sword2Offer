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
Method: 求解二进制中1的个数的特殊方法：(n - 1) & n，每进行一次这个操作就会减少一个二进制中的1
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n)
        {
            cnt ++;
            n = (n - 1) & n;
        }
        return cnt;
    }
};

int main()
{
   
   return 0;
}
