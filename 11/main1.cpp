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
begin:  10:26
end:    11:21
Time Complexity: O(logN)
Space Complexity:   O(1)
Method:此题难度较大，重点在于每一次比较最右边的数，用来作为二分的标准
*/
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int l = 0, r = numbers.size()-1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (numbers[mid] > numbers[r])
                l = mid + 1;
            else if (numbers[mid] < numbers[r])
                r = mid;
            else 
                r--;
        }
        return numbers[l];
    }
};

int main()
{
   
   return 0;
}
