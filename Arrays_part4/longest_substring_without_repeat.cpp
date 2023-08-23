// Length of Longest Substring without any Repeating Character

// Given a string s, find the length of the longest substring without repeating characters.

// Input: s = "abcabcbb"
// Output : 3
// Explanation : The answer is "abc", with the length of 3.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        vector<int> dict(256, -1);

        int left = 0;
        int right = 0;
        int n = s.length();
        int length = 0;

        while (right < n)
        {
            if (dict[s[right]] != -1)
            {
                left = max(dict[s[right]] + 1, left);
            }

            dict[s[right]] = right;

            length = max(length, right - left + 1);
            right++;
        }

        return length;
    }
};