// Maximum Width of a Binary Tree

// Given the root of a binary tree, return the maximum width of the given tree.

// The maximum width of a tree is the maximum width among all levels.

// The width of one level is defined as the length between the end - nodes(the leftmost and rightmost non - null nodes),
// where the null nodes between the end - nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.

    if (root == NULL)
    {
        return 0;
    }

    queue<TreeNode<int> *> q;

    q.push(root);

    int res = 0;

    while (!q.empty())
    {

        int count = q.size();

        res = max(res, count);

        for (int i = 0; i < count; i++)
        {
            TreeNode<int> *curr = q.front();
            q.pop();

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }

            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }

    return res;
}