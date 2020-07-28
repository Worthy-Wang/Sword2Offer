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
begin:  9:25
end:    11:15
Time Complexity:    O(logN)
Space Complexity:   O(1)
Method: 采用二分法的思想进行快速幂运算
*/
class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        int i = n;
        while (i)
        {
            if (i & 1)
                res *= x;
            x *= x;
            i /= 2;
        }
        return n > 0 ? res : 1.0/res;
    }
};

int main()
{
    Solution s;
    // cout << s.myPow(2.00000, -2147483648) << endl;
    cout << (-1 / 2) << endl;
    return 0;
}
