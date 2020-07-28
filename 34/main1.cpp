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
begin:  18:11
end:    18:31
Time Complexity:    O(N)    
Space Complexity:   O(N)
Method: DFS
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
    vector<vector<int>> ans;
public:
    void DFS(TreeNode* root, int sum, vector<int>& path)
    {
        if (!root)
            return;
        if (!root->left && !root->right && sum == root->val)
        {
            path.push_back(root->val);        
            ans.push_back(path);
            path.pop_back();
            return;
        }

        path.push_back(root->val);        
        DFS(root->left, sum - root->val, path);
        DFS(root->right, sum - root->val, path);
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        DFS(root, sum, path);
        return ans;
    }
};

int main()
{
   
   return 0;
}
