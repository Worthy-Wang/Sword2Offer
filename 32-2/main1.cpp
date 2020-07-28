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
begin:  15:24
end:    15:35
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 二叉树层序遍历的变形题，需要借用两个辅助队列
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root)
            return {};
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        que.push(root);
        while (!que.empty())
        {
            vector<int> vec;
            queue<TreeNode*> temp;
            while (!que.empty())
            {
                TreeNode *node = que.front();
                vec.push_back(node->val);
                que.pop();
                if (node->left) temp.push(node->left);
                if (node->right) temp.push(node->right);
            }
            swap(temp, que);
            ans.push_back(vec);
        }
        return ans;
    }
};

int main()
{
   
   return 0;
}
