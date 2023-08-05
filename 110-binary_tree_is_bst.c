#include "binary_trees.h"

/**
* isBST - compares node
* @tree: pointer to the root node of the tree to check
* @min: minimum value
* @max: maximum value
* Return: 1 on success, otherwise 0
*/
int isBST(const binary_tree_t *tree, int min, int max)
{
if (tree == NULL)
return (1);

if (tree->n < min || tree->n > max)
return (0);

return (
isBST(tree->left, min, tree->n - 1) &&
isBST(tree->right, tree->n + 1, max)
);
}

/**
* binary_tree_is_bst - checks if a binary tree is a valid Binary Search tree
* @tree: pointer to the root node of the tree to check
* Return: 1 if tree is a valid BST, otherwise 0
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (isBST(tree, INT_MIN, INT_MAX));
}
