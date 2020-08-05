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
begin:  13:52
end:    15:02
Time Complexity:  O(N)
Space Complexity: O(N)
Method: 创建两个辅助数组，一个存放左边的乘积，一个存放右边的乘积
*/
class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> left(a.size(), 1);
        vector<int> right(a.size(), 1);
        for (int i = 1; i < left.size(); i++)
            left[i] = left[i-1] * a[i-1];
        for (int i = right.size() - 2; i >= 0; i--)
            right[i] = right[i+1] * a[i+1];
        vector<int> ans(a.size());
        for (int i = 0; i < a.size(); i++)
            ans[i] = left[i] * right[i];
        return ans;
    }
};



int main()
{
   
   return 0;
}
