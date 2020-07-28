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


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

/*
begin:  15:53
end:    16:04
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 倒序打印链表采用辅助栈的方法
*/
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<int> sta;
        while (head)
        {
            sta.push(head->val);
            head = head->next;
        }
        vector<int> ans;
        while (!sta.empty())
        {
            ans.push_back(sta.top());
            sta.pop();
        }
        return ans;
    }
};

int main()
{
   
   return 0;
}
