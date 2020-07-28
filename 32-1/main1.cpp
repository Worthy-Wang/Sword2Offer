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
begin:  15:13
end:    15:21
Time Complexity:  O(N)
Space Complexity: O(N)
Method: 二叉树的层序遍历
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
    vector<int> levelOrder(TreeNode* root) {
        if (!root)  return {};
        vector<int> ans;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty())
        {
            TreeNode* p = que.front();
            ans.push_back(p->val);
            que.pop();
            if (p->left) que.push(p->left);
            if (p->right) que.push(p->right);
        }
        return ans;
    }
};


int main()
{
   
   return 0;
}
