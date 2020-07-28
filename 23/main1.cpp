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
begin:  15:17
end:    16:10
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 重要的是理解 s == nb; a + nb == a; 这道题就能做出来了
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next)   return nullptr;
        ListNode *fast = head, *slow = head;
        do
        {
            if (!fast->next || !fast->next->next)   return nullptr;
            fast = fast->next->next;
            slow = slow->next;
        }while (slow != fast);
        
        ListNode *slow2 = head;
        while (slow != slow2)
        {
            slow = slow->next;
            slow2 = slow2->next;
        }
        return slow;
    }
};

int main()
{
   
   return 0;
}
