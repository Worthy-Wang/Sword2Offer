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
#include <unordered_set>
using namespace std;

/*
begin:  15:38
end:    15:58
Time Complexity:    O(M + N)
Space Complexity:   O(1)
Method: 快慢指针法
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lA = 0, lB= 0;
        for (auto pA = headA; pA; lA++, pA = pA->next);
        for (auto pB = headB; pB; lB++, pB = pB->next);
        if (lA > lB)
        {
            int diff = lA - lB;
            for (; diff ; diff--, headA = headA->next);
        }
        else
        {
            int diff = lB - lA;
            for (; diff; diff--, headB = headB->next);
        }
        for (; headA != headB; headA = headA->next, headB = headB->next);
        return headA;
    }
};



int main()
{
   
   return 0;
}
