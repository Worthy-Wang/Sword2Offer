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
begin:  10:00
end:    10:30
Time Complexity:    O(N)
Space Complexity:   O(logN)
Method: recursion
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
    bool recur(TreeNode* A, TreeNode* B)
    {
        if (!A && !B)   return true;
        else if (!A || !B)  return false;
        else    
            return (A->val==B->val) && recur(A->left,B->right) && recur(A->right, B->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root)  return true;
        return recur(root->left, root->right);
    }
};

int main()
{
   
   return 0;
}
