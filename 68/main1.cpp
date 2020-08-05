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
begin:  16:39
end:    16:51
Time Complexity:    O(logN)
Space Complexity:   O(N)
Method: 利用BST的性质，找到最近的公共祖先
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int leftVal = min(p->val, q->val);
        int rightVal = max(p->val, q->val);
        if (!root)
            return nullptr;
        if (leftVal <= root->val && root->val <= rightVal)
            return root;
        else if (rightVal < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else if (leftVal > root->val)
            return lowestCommonAncestor(root->right, p, q);
        return nullptr;
    }
};

int main()
{
   
   return 0;
}
