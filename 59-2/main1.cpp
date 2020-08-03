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
begin:  17:46
end:    17:53
Time Complexity:    O(1)
Space Complexity:   O(N)
Method: 双队列的方法存储最大值，可以类比双栈法存储最大值
*/
class MaxQueue {
   std::queue<int> que;
   std::deque<int> deque;
public:
    MaxQueue() {
    }
    
    int max_value() {
        if (que.empty())
            return -1;
        return deque.front();
    }
    
    void push_back(int value) {
        que.push(value);
        while (!deque.empty() && value > deque.back())
            deque.pop_back();
        deque.push_back(value);
    }
    
    int pop_front() {
        if (que.empty())
            return -1;
        int ret = que.front();
        que.pop();
        if (deque.front() == ret)
            deque.pop_front();
        return ret;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */

int main()
{
   return 0;
}
