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
begin:  10:00
end:    10:40
Time Complexity:    O(N)
Space Complexity:   O(N)
Method:     在求树的深度函数稍微做改进，改为后序遍历并添加flag遍历，让时间复杂度变为O(N)
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int DFS(TreeNode* root, bool& flag)
    {
        if (!root)
            return 0;
        int l = DFS(root->left, flag);
        int r = DFS(root->right, flag);
        if (fabs(l - r) > 1)
            flag = false;
        return max(l , r) + 1;
    }

    bool isBalanced(TreeNode* root) {
       bool flag = true;
       DFS(root, flag);
       return flag; 
    }
};

int main()
{
   
   return 0;
}
