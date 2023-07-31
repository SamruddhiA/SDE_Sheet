// Remove Duplicates from Sorted array

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() == 0 || nums.size() == 1)
        {
            return nums.size();
        }

        int j = 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[j++] = nums[i];
            }
        }
        nums[j++] = nums[nums.size() - 1];

        return j;
    }
};