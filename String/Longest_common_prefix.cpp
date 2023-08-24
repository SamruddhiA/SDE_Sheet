// Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        int count = 0;
        int min = 1000;
        string str;

        for (int i = 0; i < strs.size(); i++)
        {
            int length = strs[i].length();
            if (length < min)
            {
                min = length;
                str = strs[i];
            }
        }

        for (int i = 0; i < min; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != str[i])
                {
                    return str.substr(0, count);
                }
            }
            count++;
        }

        return str.substr(0, count);
    }
};