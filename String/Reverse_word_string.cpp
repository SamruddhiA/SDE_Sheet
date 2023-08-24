// Reverse words in a string

// Given an input string s, reverse the order of the words.

/* A word is defined as a sequence of non - space characters.The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
 Note that s may contain leading or trailing spaces or multiple spaces between two words.
 The returned string should only have a single space separating the words.Do not include any extra spaces. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {

        string rev;
        int i = 0;
        int n = s.length();

        while (i < n)
        {
            while (i < n && s[i] == ' ')
                i++;
            if (i >= n)
                break;
            int j = i + 1;
            while (j < n && s[j] != ' ')
                j++;
            string sub = s.substr(i, j - i);
            if (rev.length() == 0)
                rev = sub;
            else
                rev = sub + " " + rev;
            i = j + 1;
        }
        return rev;
    }
};