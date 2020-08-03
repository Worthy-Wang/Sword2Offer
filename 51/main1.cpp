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
begin:  12:03
end:    15:37
Time Complexity:    O(nlogn)
Space Complexity:   O(N)
Method: 此题实质上考察的是 归并排序
*/

class Solution
{
public:
    int merge(vector<int> &nums, int low, int mid, int high)
    {
        int ans = 0;
        vector<int> temp;
        int i = low, j = mid + 1;
        while (i <= mid && j <= high)
        {
            if (nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
            {
                temp.push_back(nums[j++]);
                ans += mid - i + 1; //关键修改步骤
            }
        }
        while (i <= mid)
            temp.push_back(nums[i++]);
        while (j <= high)
            temp.push_back(nums[j++]);
        //赋值nums
        for (int k = low; k <= high; k++)
            nums[k] = temp[k - low];
        return ans;
    }

    int merge_sort(vector<int> &nums, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) >> 1;
            return merge_sort(nums, low, mid) +
                   merge_sort(nums, mid + 1, high) +
                   merge(nums, low, mid, high);
        }
        return 0;
    }

    int reversePairs(vector<int> &nums)
    {
        return merge_sort(nums, 0, nums.size() - 1);
    }
};

int main()
{
    vector<int> nums{7, 5, 6, 4};
    Solution s;
    cout << s.reversePairs(nums);
    return 0;
}
