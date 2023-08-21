// Construct Binary Tree from Inorder and Preorder Traversal

// Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

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
    int preIndex = 0;
    TreeNode *buildTreeUtil(vector<int> &preorder, vector<int> &inorder, int is, int ie)
    {
        if (is > ie)
            return NULL;

        TreeNode *root = new TreeNode(preorder[preIndex]);
        preIndex++;

        int inIndex;
        for (int i = is; i <= ie; i++)
        {
            if (inorder[i] == root->val)
            {
                inIndex = i;
                break;
            }
        }

        root->left = buildTreeUtil(preorder, inorder, is, inIndex - 1);
        root->right = buildTreeUtil(preorder, inorder, inIndex + 1, ie);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        TreeNode *ans = buildTreeUtil(preorder, inorder, 0, inorder.size() - 1);
        return ans;
    }
};