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
begin:  19:16
end:    19:52
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 此题本质上考察的就是线索二叉树
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {
    Node *pre;
public:
    void DFS(Node *root)
    {
        if (!root)
            return;
        DFS(root->left);
        root->left = pre;
        pre->right = root;
        pre = root;
        DFS(root->right);
    }

    Node* treeToDoublyList(Node* root) {
        if (!root)  return nullptr;
        Node *dummy = new Node(-1);
        pre = dummy;
        DFS(root);
        Node *head = dummy->right;
        Node *tail = pre;
        head->left = tail;
        tail->right = head;
        return head;
    }
};

int main()
{
   
   return 0;
}
