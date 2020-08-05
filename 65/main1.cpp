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
begin:  12:07
end:    13:45
Time Complexity:    O(1)
Space Complexity:   O(1)
Method: 经典加减法计算器
*/

class Solution {
public:
    int add(int a, int b) {
    // 无进位和、进位值
    int sum, carry;
    while (b != 0) {
        // 异或操作得无进位和
        sum = a ^ b;
        // 与操作后移位得进位值
        carry = ((unsigned int) (a & b) << 1);

        // 循环，直到进位为0
        a = sum;
        b = carry;
    }

    return a;
}
};

int main()
{
    cout << add(-1, 2) << endl;
   return 0;
}
