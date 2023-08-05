#include "binary_trees.h"

/**
* binary_tree_rotate_left - performs a left-rotation on a
* binary tree
* @tree: pointer to the root node of a binary tree
* Return: pointer to the new root node of the rotated tree
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *a, *parent = tree;

if (!tree)
return (NULL);

a = parent->right;
if (!a)
return (tree);

if (a->left)
a->left->parent = parent;

parent->right = a->left;
a->left = parent;
a->parent = parent->parent;
parent->parent = a;

if (a->parent && a->parent->left == parent)
a->parent->left = a;
else if (a->parent)
a->parent->right = a;

return (a);
}
