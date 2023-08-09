// Postorder Travesal

// Given the root of a binary tree, return the postorder traversal of its nodes' values.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    void ans(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            return;
        }

        ans(root->left, v);

        ans(root->right, v);

        v.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode *root)
    {

        vector<int> v;

        ans(root, v);

        return v;
    }
};