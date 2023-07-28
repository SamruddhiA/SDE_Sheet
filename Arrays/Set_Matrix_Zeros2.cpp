// Set Matrix To Zero

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        bool first_row = false;
        bool first_col = false;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    if (i == 0)
                    {
                        first_row = true;
                    }
                    if (j == 0)
                    {
                        first_col = true;
                    }
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if (first_row)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[0][j] = 0;
            }
        }

        if (first_col)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};