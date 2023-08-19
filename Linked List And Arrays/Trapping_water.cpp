// Trapping Water

// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation : The above elevation map(black section) is represented by array[0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1].In this case, 6 units of rain water(blue section) are being trapped.

#include <bits/stdc++.h>
using namespace std;

long long getTrappedWater(long long *arr, int n)
{
    // Write your code here.

    long long left = 0;

    long long right = n - 1;

    long long res = 0;

    long long maxleft = 0;

    long long maxright = 0;

    while (left <= right)
    {
        if (arr[left] <= arr[right])
        {
            if (arr[left] >= maxleft)
            {
                maxleft = arr[left];
            }
            else
            {
                res += maxleft - arr[left];
            }

            left++;
        }
        else
        {
            if (arr[right] >= maxright)
            {
                maxright = arr[right];
            }
            else
            {
                res += maxright - arr[right];
            }

            right--;
        }
    }

    return res;
}