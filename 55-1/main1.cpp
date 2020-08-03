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
begin:  9:40
end:    9:43
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 二叉树深度经典求法
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root)
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        return 0;
    }
};


int main()
{
   
   return 0;
}
