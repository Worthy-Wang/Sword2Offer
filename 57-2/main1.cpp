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
begin:  13:37
end:    14:45
Time Complexity:    O(target)
Space Complexity:   O(1)
Method: 双指针法
*/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int i = 0, j = 1;
        vector<vector<int>> ans;
        while (i < j)
        {
            double sum = (double)(i+1 + j+1) * (j - i + 1) / 2;
            if (sum == target)
            {
                vector<int> temp;
                for (int k = i+1; k <= j+1; k++)
                    temp.push_back(k);
                ans.push_back(temp);
                j++;
            }
            else if (sum < target)
                j++;
            else    
                i++;
        }      
        return ans;
    }
};


int main()
{
    return 0;
}
