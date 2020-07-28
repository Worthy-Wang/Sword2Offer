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
begin:  16:14
end:    16:22
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 链表基础操作：头插法
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *dummy = new ListNode(-1);
        ListNode *p = head;
        while (p)
        {
            ListNode *temp = p->next;
            p->next = dummy->next;
            dummy->next = p;
            p = temp;
        }
        return dummy->next;
    }
};

int main()
{
   
   return 0;
}
