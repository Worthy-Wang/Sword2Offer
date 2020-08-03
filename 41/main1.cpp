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
begin:  13:10
end:    15:04
Time Complexity:  O(logN)
Space Complexity: O(N)
Method:  将数组分成两个堆，中间值便是堆顶值
*/

class MedianFinder {
    priority_queue<int, vector<int>, less<int>> l; //左边的最大堆，允许多存放一个元素  
    priority_queue<int, vector<int>, greater<int>> r; //右边的最小堆
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }
    
    void addNum(int num) {
        l.push(num);
        r.push(l.top());
        l.pop();

        if (r.size() > l.size())
        {
            l.push(r.top());
            r.pop();
        }
    }
    
    double findMedian() {
        return l.size() > r.size() ? l.top() : (double)(l.top()+r.top())/2;
    }   
};


int main()
{
   
   return 0;
}
