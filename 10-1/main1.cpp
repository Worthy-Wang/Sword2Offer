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
using namespace std;

/*
begin:  8:35
end:    9:00
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 由于原来的递归方法不能够进行剪枝，造成了大量的重复计算；所以采用动态规划的方法完成，有效避免了重复计算。
*/
class Solution {
public:
    int fib(int n) {
        if (0 == n) return 0;
        else if (1 == n) return 1;
        else 
        {
            long long f0 = 0, f1 = 1, fi = 0;
            for (size_t i = 2; i <= n; i++)
            {
                fi = (f0 + f1) % 1000000007;
                f0 = f1;
                f1 = fi;
            }
            return fi % 1000000007;
        }
    }
};

int main()
{
   
   return 0;
}
