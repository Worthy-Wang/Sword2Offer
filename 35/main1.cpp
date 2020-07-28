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
begin:  18:39
end:    19:00
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 深拷贝方法
*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> hashmap;
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        for (auto cur = head; cur; cur = cur->next)
        {
            Node* node = new Node(cur->val);
            tail->next = node;
            tail = node;
            hashmap[cur] = node;
        }

        //random赋值
        for (auto cur = head, p = dummy->next; cur && p; cur = cur->next, p = p->next)
            p->random = hashmap[cur->random];
        return dummy->next;
    }
};

int main()
{
   
   return 0;
}
