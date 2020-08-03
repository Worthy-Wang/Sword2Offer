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
begin:  9:25
end:    9:37
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 简单的右中左遍历方式即可
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
    void InOrderTraverse(TreeNode* root, vector<int>& nums)
    {
        if (root)
        {
            InOrderTraverse(root->right, nums);
            nums.push_back(root->val);
            InOrderTraverse(root->left, nums);
        }
    }

    int kthLargest(TreeNode* root, int k) {
        vector<int> nums;
        InOrderTraverse(root, nums);
        return nums[k-1];
    }
};

int main()
{
   
   return 0;
}
