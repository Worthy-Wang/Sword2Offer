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
begin:  17:02
end:    17:35
Time Complexity:    O(NA * NB)
Space Complexity:   O(NA)
Method:
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
    bool recur(TreeNode *A, TreeNode* B)
    {
        if (!B) return true;
        if (!A) return false;
        return (A->val == B->val) && recur(A->left, B->left) && recur(A->right, B->right);
    }

    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (!A || !B)   return false;
        return recur(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};

int main()
{
   
   return 0;
}
