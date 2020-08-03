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
begin:  11:32
end:    11:42
Time Complexity:    O(N)
Space Complexity:   O(1)
Method: 快排思想，实质上也就是topK算法找第k大的数，k为中间数
*/

class Solution {
public:

    int partition(vector<int>& nums, int low, int high)
    {
        int key = nums[low];
        int i = low, j = high;
        while (i < j)
        {
            while (i < j && nums[j] > key) j--;
            if (i < j) nums[i++] = nums[j]; 
            while (i < j && nums[i] < key) i++;
            if (i < j)  nums[j--] = nums[i];
        }
        nums[i] = key;
        return i;
    }

    int majorityElement(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        int k = nums.size() / 2;
        while (low <= high)
        {
            int pivot = partition(nums, low, high);
            if (pivot == k) return nums[pivot];
            else if (pivot < k) low = pivot + 1;
            else //pivot > k
                high = pivot - 1;
        }
        return -1;
    }
};

int main()
{
    return 0;
}
