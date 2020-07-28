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
begin:  9:22
end:    9:39
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 二叉树的非递归遍历(辅助栈)
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
    TreeNode* mirrorTree(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode *p = root;
        while (1)
        {
            while (p)
            {
                swap(p->left, p->right);
                s.push(p);
                p = p->left;
            }
            if (s.empty())  break;
            while (!s.empty())
            {
                p = s.top();
                s.pop();
                p = p->right;
                if (p)
                    break;
            }
        }
        return root;
    }
}; 

int main()
{
   
   return 0;
}
