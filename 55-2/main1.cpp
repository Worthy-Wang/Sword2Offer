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
begin:  9:45
end:    9:56    
Time Complexity:    O(NlogN)
Space Complexity:   O(N)
Method: 直接利用maxDepth函数，但是其中有大量的重复计算
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
    int maxDepth(TreeNode* root) {
        if (root)
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        return 0;
    }

    bool isBalanced(TreeNode* root) {
        if (root)
        {
            bool flag = fabs(maxDepth(root->left)-maxDepth(root->right)) <= 1 ? true : false;
            return flag && isBalanced(root->left) && isBalanced(root->right);
        }
        return true;
    }
};

int main()
{
   
   return 0;
}
