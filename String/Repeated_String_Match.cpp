// Repeated String Match (Rabin Karp)

// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

// Notice : string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int repeatedStringMatch(string a, string b)
    {

        string s = a;
        int minRepeat = b.size() / a.size();
        int count = 1;
        for (int i = 0; i < minRepeat + 2; i++)
        {
            if (s.find(b) != string::npos)
                return count;
            count += 1;
            s += a;
        }
        return -1;
    }
};