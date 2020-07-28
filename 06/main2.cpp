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
begin:  16:04
end:    16:20
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 倒叙打印链表采用递归法
*/
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        if (!head)
            return vector<int>();
        vector<int> ans = reversePrint(head->next);
        ans.push_back(head->val);
        return ans;
    }
};

int main()
{
   
   return 0;
}
