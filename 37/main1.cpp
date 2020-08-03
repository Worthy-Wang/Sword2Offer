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
begin:   8:50
end:     10:13
Time Complexity:  O(N)
Space Complexity: O(N)
Method:  此题实质上考察的是二叉树的创建，采用前序创建法（结合流操作）
*/

struct TreeNode
{
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Codec
{
public:
   // Encodes a tree to a single string.
   string serialize(TreeNode *root)
   {
      stringstream ss;
      DFS(root, ss);
      return ss.str();
   }

   // Decodes your encoded data to tree.
   TreeNode *deserialize(string data)
   {
      stringstream ss(data);
      return createTree(ss);
   }

private:
   void DFS(TreeNode *root, stringstream &ss)
   {
      if (!root)
      {
         ss << "null"
            << " ";
         return;
      }

      ss << root->val << " ";
      DFS(root->left, ss);
      DFS(root->right, ss);
   }

   TreeNode *createTree(stringstream &ss)
   {
      string s;
      ss >> s;
      if (s == "null")
         return nullptr;
      int val = stoi(s);
      TreeNode *node = new TreeNode(val);
      node->left = createTree(ss);
      node->right = createTree(ss);
      return node;
   }
};

int main()
{
   Codec c;
   TreeNode *node = c.deserialize("1 2 null null 3 4 null null 5 null null");
   while (node)
   {
      cout << node->val << endl;
      node = node->right;
   }
   return 0;
}
