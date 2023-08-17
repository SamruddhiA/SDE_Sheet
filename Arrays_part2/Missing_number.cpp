// Missing Number

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int ans = 0;

        for (int i = 0; i <= nums.size(); i++)
        {
            ans = ans ^ i;
        }

        for (int num : nums)
        {
            ans = ans ^ num;
        }

        return ans;
    }
};