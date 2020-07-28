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
begin:  10:36
end:    12:11
Time Complexity:    O(M * N)
Space Complexity:   O(1)
Method: 采用设置坐标的方式逐渐减去每一个行，每一个列
*/
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        if (matrix.empty())
            return {};
        int beginX = 0, beginY = 0, endX = matrix.size() - 1, endY = matrix[0].size() - 1;
        vector<int> ans;
        while (1)
        {
            //right
            for (int y = beginY; y <= endY; y++)
                ans.push_back(matrix[beginX][y]);
            if (++beginX > endX)
                break;
            //down
            for (int x = beginX; x <= endX; x++)
                ans.push_back(matrix[x][endY]);
            if (--endY < beginY)
                break;
            //left
            for (int y = endY; y >= beginY; y--)
                ans.push_back(matrix[endX][y]);
            if (--endX < beginX)
                break;
            //up
            for (int x = endX; x >= beginX; x--)
                ans.push_back(matrix[x][beginY]);
            if (++beginY > endY)
                break;
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> vec{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    Solution s;
    vector<int> ans = s.spiralOrder(vec);
    for (auto& e: ans)
        cout << e << endl;
    return 0;
}
