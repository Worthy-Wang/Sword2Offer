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
begin:  15:22
end:    15:37
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: substr函数快速求解
*/
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return s.substr(n, s.size()-n) + s.substr(0,n);
    }
};

int main()
{
   
   return 0;
}
