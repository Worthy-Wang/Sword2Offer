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
begin:  15:06
end:    15:22
Time Complexity:    O(M+N)
Space Complexity:   O(1)
Method:采用该矩阵的特点，从右上角入手进行查找
*/

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
            return false;
        int M = matrix.size() - 1, N = matrix[0].size() - 1;
        int i = 0, j = N;
        while (i <= M && j >= 0)
        {
            if (target == matrix[i][j]) return true;
            else if (target < matrix[i][j]) j--;
            else i++;
        }
        return false;
    }
};

int main()
{
   
   return 0;
}
