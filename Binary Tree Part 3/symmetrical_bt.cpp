// Symmetric Tree

// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

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
    bool matching(TreeNode *one, TreeNode *two)
    {
        if (one != NULL && two != NULL)
        {
            bool a = matching(one->left, two->right);
            bool b = matching(one->right, two->left);

            if (one->val == two->val && a && b)
            {
                return true;
            }
        }
        else if (one == NULL && two == NULL)
        {
            return true;
        }
        // else{
        //     return false;
        // }

        return false;
    }
    bool isSymmetric(TreeNode *root)
    {

        if (root == NULL)
        {
            return true;
        }

        return matching(root->left, root->right);
    }
};