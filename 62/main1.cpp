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
begin:  9:58
end:    10:44
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 经典约瑟夫问题，通过只剩一个存活的人的位置开始反推
*/
class Solution {
public:
    int lastRemaining(int n, int m) {
        int livepos = 0;
        for (int i = 2; i <= n; i++)
            livepos = (livepos + m) % i;
        return livepos;
    }
};

int main()
{
   
   return 0;
}
