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
begin:  15:37
end:    15:59
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 只是在上一题的基础上增加reverse
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root)
            return {};
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        que.push(root);
        int cnt = 0;
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
            if (cnt & 0x1)
                reverse(vec.begin(), vec.end());
            ans.push_back(vec);
            cnt++;
        }
        return ans;
    }
};

int main()
{
   
   return 0;
}
