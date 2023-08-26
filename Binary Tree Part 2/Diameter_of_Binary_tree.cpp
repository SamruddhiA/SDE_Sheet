// Diameter of a Binary Tree

// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree.This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

// Input: root = [1,2,3,4,5]
// Output : 3 Explanation : 3 is the length of the path[4, 2, 1, 3] or [ 5, 2, 1, 3 ].

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
    int height(TreeNode *node, int &dia)
    {
        if (node == NULL)
        {
            return 0;
        }
        int lh = height(node->left, dia);
        int rh = height(node->right, dia);
        dia = max(dia, lh + rh);
        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};