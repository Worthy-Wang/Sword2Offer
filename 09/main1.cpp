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

/*
begin:   18:11
end:     18:24
Time Complexity:     插入与删除均为O(1)
Space Complexity:    O(N)
Method:  基础题，多用一个栈作为辅助
*/

class CQueue {
    stack<int> stack1;
    stack<int> stack2; //用作辅助栈
public:
    CQueue() {
    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if (stack1.empty())
            return -1;
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }

        int ret = stack2.top();
        stack2.pop();
    
        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return ret;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

int main()
{
   
   return 0;
}
