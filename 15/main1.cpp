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
begin:  11:44
end:    12:00
Time Complexity:    O(1)
Space Complexity:   O(1)
Method: 利用位运算与右移的特性快速求解
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n)
        {
            if (1 & n)
                cnt ++;
            n = n >> 1;
        }
        return cnt;
    }
};

int main()
{
    // uint32_t n = 10;
    int n = -10; //在这个地方 uint32_t 和 int 的区别就会显现，uint32_t鲁棒性更强，可以处理负数，因为编译器知道这是32位的，但是int则不行
    int cnt = 0;
    while (n){
        n = n >> 1;
        cnt ++;
    }
    cout << cnt << endl;
   return 0;
}
