// Zigzag Conversion

// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {

        vector<string> ans(numRows);

        if (numRows == 1)
        {
            return s;
        }

        bool flag = false;
        int i = 0;
        for (auto ch : s)
        {
            ans[i] += ch;
            if (i == 0 || i == numRows - 1)
            {
                flag = !flag;
            }
            if (flag)
            {
                i += 1;
            }
            else
            {
                i -= 1;
            }
        }

        string zigzag = "";
        for (auto str : ans)
        {
            zigzag += str;
        }

        return zigzag;
    }
};