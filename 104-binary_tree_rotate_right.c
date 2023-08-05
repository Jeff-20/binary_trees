#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node
 * Return: pointer to the new root nodeof the rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *rot_right, *parent = tree;

if (!tree)
return (NULL);

rot_right = parent->left;
if (!rot_right)
return (tree);

if (rot_right->right)
rot_right->right->parent = parent;

parent->left = rot_right->right;
rot_right->right = parent;
rot_right->parent = parent->parent;
parent->parent = rot_right;

if (rot_right->parent && rot_right->parent->left == parent)
rot_right->parent->left = rot_right;
else if (rot_right->parent)
rot_right->parent->right = rot_right;

return (rot_right);
}
