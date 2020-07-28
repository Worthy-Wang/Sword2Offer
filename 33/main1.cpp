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
begin:  16:14
end:    17:25
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 根据BST的特性，左右根，进行划分区间然后判断
*/

class Solution {
public:
    bool recur(vector<int>& postorder, int i, int j)
    {
        if (i >= j)
         return true;
        int mid = i;
        while (postorder[mid] < postorder[j])
            mid++;
        int p = mid;
        while (postorder[p] > postorder[j])
            p++;
        return p==j && recur(postorder, i, mid - 1) && recur(postorder, mid, j-1);
    }

    bool verifyPostorder(vector<int>& postorder) {
        if (postorder.empty())
            return true;
        return recur(postorder, 0, postorder.size()-1);
    }
};

int main()
{
   
   return 0;
}
