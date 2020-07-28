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
begin:  11:27
end:    12:00
Time Complexity: O(M * N * 3^K)    K为word长度
Space Complexity:   O(K)
Method: DFS(回溯法)经典例题，使用模板解题
*/

class Solution {
public:
    bool DFS(vector<vector<char>>& board, int i, int j, vector<vector<bool>>& visited, string word, int index)
    {
        if (index == word.size())
            return true;
        
        //剪枝
        if (i < 0 || j < 0 || i == board.size() || j == board[0].size())
            return false;
        if (visited[i][j] == true)
            return false;
        if (board[i][j] != word[index])
            return false;

        visited[i][j] = true;
        bool ret = DFS(board, i + 1, j, visited, word, index + 1) || DFS(board, i - 1, j, visited, word, index + 1) || DFS(board, i, j + 1, visited, word, index + 1) || DFS(board, i, j - 1, visited, word, index + 1);
        visited[i][j] = false;
        return ret;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty())
            return false;

        int M = board.size(), N = board[0].size();
        vector<vector<bool>> visited(M, vector<bool>(N, false));
        bool flag = false;
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                if (DFS(board, i, j, visited, word, 0))
                    return true;
        return false;
    }
};

int main()
{
   
   return 0;
}
