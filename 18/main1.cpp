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
begin:  11:41
end:    11:58
Time Complexity:    O(N)
Space Complexity:   O(1)
Method:常规链表操作
*/
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (!head)  return head;
        if (head-> val == val)  return head->next;

        ListNode *pPrev = head;
        ListNode *pNext = head->next;
        while (pNext)
        {
            if (val == pNext->val)
            {
                pPrev->next = pNext->next;
                return head;
            }
            pPrev = pNext;
            pNext = pNext->next;
        }
        return head;
    }
};

int main()
{
   
   return 0;
}
