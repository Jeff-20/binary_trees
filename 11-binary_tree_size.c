#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: size of the tree, otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0, a = 0, b = 0;

if (tree == NULL)
return (0);

else
{
b = binary_tree_size(tree->left);
a = binary_tree_size(tree->right);
size = a + b + 1;
}

return (size);
}
