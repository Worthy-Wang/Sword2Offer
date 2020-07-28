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

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};


/*
begin:  17:30
end:    18:03
Time Complexity:    O(N)
Space Complexity:   O(1)
Method:根据有无右子树做情况讨论分析即可
*/

class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if (!pNode)
           return nullptr;
        if (pNode->right) //有右子树
        {
            TreeLinkNode *node = pNode->right;
            while (node->left) node = node->left;
            return node;
        }
        else //无右子树
        {
            TreeLinkNode *node = pNode->next;
            while (node)
            {
                if (node->left == pNode)
                        return node;
                pNode = node;
                node = node->next;
            }
        }
        return nullptr;
    }
};

int main()
{
   
   return 0;
}
