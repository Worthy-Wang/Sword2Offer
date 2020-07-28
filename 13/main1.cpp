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
using namespace std;

/*
begin:  12:10
end:    12:37
Time Complexity:    O(MN)
Space Complexity:   O(MN)
Method: 回溯(DFS)算法，套用模板
*/
class Solution {
public:
    int count(int i, int j)
    {
        int sum = 0;
        while (i){ sum += i % 10; i /= 10;}
        while (j){ sum += j % 10; j /= 10;}
        return sum;
    }

    int DFS(int i, int j, vector<vector<bool>>& visited, int m, int n, int k)
    {
        //剪枝
        if (i < 0 || j < 0 || i >= m || j >= n || visited[i][j] == true || count(i,j) > k)
            return 0;
        visited[i][j] = true;
        int ret = DFS(i + 1, j , visited, m, n, k) + DFS(i - 1, j , visited, m, n, k) + DFS(i, j + 1 , visited, m, n, k) + DFS(i, j - 1 , visited, m, n, k);
        return ret + 1;
    }

    int movingCount(int m, int n, int k) {
        vector<vector<bool>> visited(m, vector<bool>(n, false)); 
        return DFS(0, 0, visited, m, n, k);
    }
};

int main()
{
   
   return 0;
}
