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
begin:  12:50
end:    13:28
Time Complexity:    O(1)
Space Complexity:   O(N)
Method: 辅助栈法
*/

class MinStack {
    stack<int> stack1;
    stack<int> stack2;
public:
    /** initialize your data structure here. */
    MinStack() {
        stack2.push(INT32_MAX);
    }
    
    void push(int x) {
        stack1.push(x);
        stack2.push(std::min(x, stack2.top()));
    }
    
    void pop() {
        stack1.pop();
        stack2.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int min() {
        return stack2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


int main()
{
   cout << INT32_MAX << endl;
   return 0;
}
