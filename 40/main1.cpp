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
begin:  11:47
end:    11:53
Time Complexity:    O(Nlogk)
Space Complexity:   O(N)
Method: 堆排序
*/

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        //大根堆
        priority_queue<int, vector<int>, less<int>> heap;
        for (auto& e: arr)
        {
            heap.push(e);
            if (heap.size() > k)
                heap.pop();
        }

        vector<int> ans;
        while (!heap.empty())
        {
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};


int main()
{
   
   return 0;
}
