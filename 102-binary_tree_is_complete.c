#include "binary_trees.h"

/**
* count_nodes - counts the number of nodes
* @root: pointer to root node
* Return: number of nodes
*/

int count_nodes(binary_tree_t *root)
{
if (!root)
return (0);

return (1 + count_nodes(root->left) + count_nodes(root->right));
}


/**
* is_complete - checks if a binary tree is complete
* @root: pointer to root node
* @idx: index of the node to evaluate
* @n: number of nodes
* Return: 1 if the tree is a heap, otherwise 0
*/

int is_complete(binary_tree_t *root, int idx, int n)
{
if (!root)
return (0);

if (idx >= n)
return (0);
if (!root->left && !root->right)
return (1);
if (root->right && !root->left)
return (0);
if (root->left && !root->right)
return (is_complete(root->left, idx * 2 + 1, n));

return (is_complete(root->left, idx * 2 + 1, n) &&
is_complete(root->right, idx * 2 + 2, n));
}

/**
* binary_tree_is_complete - checks if a binary tree is complete
* @tree: pointer to root node of a tree
* Return: 1 if the binary is complete, otherwise 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
int nodes_number;
binary_tree_t *root;

if (!tree)
return (0);

root = (binary_tree_t *)tree;
nodes_number = count_nodes(root);

return (is_complete(root, 0, nodes_number));
}
