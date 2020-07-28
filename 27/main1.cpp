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
begin:   9:08
end:     9:16
Time Complexity:  O(N)
Space Complexity: O(N)
Method:  中序遍历 + swap
*/

class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if (!root)  return nullptr;
        swap(root->left, root->right);
        mirrorTree(root->left);
        mirrorTree(root->right);
        return root;
    }
};

int main()
{
   
   return 0;
}
