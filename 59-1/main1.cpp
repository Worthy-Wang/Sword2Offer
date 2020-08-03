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
end:    17:21
Time Complexity:    O(N)
Space Complexity:   O(N)
Method: 滑动窗口法，实质上采用单调队列
*/

class Solution {
public:
    //滑动窗口(实际采用单调队列)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (nums.empty())
            return {};
        vector<int> ans;
        deque<int> que;
        //先初始化滑动窗口
        for (int i = 0; i < k; i++)
        {
            while (!que.empty() && nums[i] > que.back())
                que.pop_back();
            que.push_back(nums[i]);
        }
        ans.push_back(que.front());
        //滑动窗口滚动
        for (int i = k; i < nums.size(); i++)
        {
            if (nums[i-k] == que.front()) 
                que.pop_front();
            while (!que.empty() && nums[i] > que.back())
                que.pop_back();
            que.push_back(nums[i]);
            ans.push_back(que.front());
        }
        return ans;
    }
};

int main()
{

   return 0;
}
