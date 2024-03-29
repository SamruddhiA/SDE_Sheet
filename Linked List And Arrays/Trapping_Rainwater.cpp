// Trapping Rainwater

// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {

        int n = height.size();

        int left = 0;

        int right = n - 1;

        int res = 0;

        int maxleft = 0;

        int maxright = 0;

        while (left <= right)
        {
            if (height[left] <= height[right])
            {
                if (height[left] >= maxleft)
                {
                    maxleft = height[left];
                }
                else
                {
                    res += maxleft - height[left];
                }

                left++;
            }
            else
            {
                if (height[right] >= maxright)
                {
                    maxright = height[right];
                }
                else
                {
                    res += maxright - height[right];
                }

                right--;
            }
        }

        return res;
    }
};