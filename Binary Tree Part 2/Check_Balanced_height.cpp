// Check if the Binary Tree is Balanced Binary Tree

// Given a binary tree, determine if it is height - balanced

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        int lh = height(root->left);

        if (lh == -1)
        {
            return -1;
        }

        int rh = height(root->right);

        if (rh == -1)
        {
            return -1;
        }

        if ((abs(lh - rh)) > 1)
        {
            return -1;
        }
        else
        {
            return max(lh, rh) + 1;
        }
    }
    bool isBalanced(TreeNode *root)
    {

        if (height(root) != -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};