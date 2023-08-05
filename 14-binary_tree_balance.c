#include "binary_trees.h"

/**
 * binary_tree_height_b - measures height of a binary tree for
 * a balanced tree
 * @tree: pointer to the root node
 * Return: height, otherwise 0
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
size_t a = 0, b = 0;

if (tree == NULL)
return (0);

else
{
if (tree)
{
a = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
b = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
return ((a > b) ? a : b);
}
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node
* Return: balance factor, otherwise 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int r = 0, l = 0, t = 0;

if (tree)
{
l = ((int)binary_tree_height_b(tree->left));
r = ((int)binary_tree_height_b(tree->right));
t = l - r;
}
return (t);
}
