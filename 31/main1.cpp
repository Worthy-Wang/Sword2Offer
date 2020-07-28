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
begin:   14:27
end:     15:10
Time Complexity:  O(N)
Space Complexity: O(N)
Method:  辅助栈法
*/
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) { 
        stack<int> s;
        int j = 0;
        for (int i = 0; i < pushed.size(); i++)
        {
            s.push(pushed[i]);
            while (!s.empty() && s.top() == popped[j])
            {
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};


int main()
{

   return 0;
}
