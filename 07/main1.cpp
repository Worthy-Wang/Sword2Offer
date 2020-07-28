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
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/*
begin:  16:34
end:    17:15
Time Complexity:    O(N)
Space Complexity:   O(N)
Method:利用二叉树创建的性质，以中序遍历的分界点为核心进行递归
*/

class Solution
{
    int index = 0;
public:
    template <typename Iterator>
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, Iterator first, Iterator last)
    {
        if (first < last)
        {
            int val = preorder[index++];
            TreeNode *node = new TreeNode(val);
            auto midPos = find(inorder.begin(), inorder.end(), val);
            node->left = build(preorder, inorder, first, midPos);
            node->right = build(preorder, inorder, midPos + 1, last);
            return node;
        }
        return nullptr;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return build(preorder, inorder, inorder.begin(), inorder.end());
    }
};

int main()
{
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    Solution s;
    s.buildTree(preorder, inorder);
    return 0;
}
