#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int row_index = search_row(matrix, target);
        if (row_index != -1)
            return binarySearchOverRow(row_index, matrix, target);
        return false;
    }

    int search_row(vector<vector<int>> &matrix, int target)
    {
        int low = 0;
        int high = matrix.size() - 1;
        int index = matrix[0].size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (matrix[mid][0] <= target && target <= matrix[mid][index])
            {
                return mid;
            }
            else if (matrix[mid][0] < target)
                low = mid + 1;
            else if (matrix[mid][0] > target)
                high = mid - 1;
        }
        return -1;
    }

    bool binarySearchOverRow(int row_index, vector<vector<int>> &matrix, int target)
    {
        int low = 0;
        int high = matrix[row_index].size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (matrix[row_index][mid] == target)
            {
                return true;
            }
            else if (matrix[row_index][mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};