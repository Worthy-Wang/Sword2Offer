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
begin:  14:44
end:    14:57
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 快慢指针法，同时兼顾代码的鲁棒性
*/

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if (!head || k < 0) return head;
        ListNode *fast = head, *slow = head;
        for  (int i = 0; i < k; i++)
        {
            if (!fast)  return head;
            fast = fast->next;
        }
        while (fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};

int main()
{
   
   return 0;
}
