// Inorder Traversal of Binary Tree

// Given the root of a binary tree, return the inorder traversal of its nodes' values.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    // TreeNode() : val(0), left(nullptr), right(nullptr){} * TreeNode(int x) : val(x), left(nullptr), right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
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

        v.push_back(root->val);

        ans(root->right, v);
    }

    vector<int> inorderTraversal(TreeNode *root)
    {

        vector<int> v;

        ans(root, v);

        return v;
    }
};
