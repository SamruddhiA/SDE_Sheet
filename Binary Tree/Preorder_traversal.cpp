// Preorder Traversal

// Given the root of a binary tree, return the preorder traversal of its nodes' values.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    // *TreeNode() : val(0), left(nullptr), right(nullptr){} * TreeNode(int x) : val(x), left(nullptr), right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
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

        v.push_back(root->val);

        ans(root->left, v);

        ans(root->right, v);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {

        vector<int> v;

        ans(root, v);

        return v;
    }
};