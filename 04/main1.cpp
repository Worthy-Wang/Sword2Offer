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
using namespace std;

/*
begin:  12:32
end:    12:46
Time Complexity:    O(nlogn) 
Space Complexity:   O(1)
Method: 对每一行遍历，使用二分法
*/

class Solution
{
public:
    template <typename Iterator, typename T>
    bool my_binary_search(Iterator first, Iterator last, const T &val)
    {
        while (first < last)
        {
            auto mid = first + (last - first) / 2;
            if (val == *mid)
                return true;
            else if (val < *mid)
                last = mid;
            else
                first = mid + 1;
        }
        return false;
    }

    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target)
    {
        for (size_t i = 0; i < matrix.size(); i++)
        {
            if (my_binary_search(matrix[i].begin(), matrix[i].end(), target))
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}
