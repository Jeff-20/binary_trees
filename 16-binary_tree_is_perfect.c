#include "binary_trees.h"
/**
* tree_is_perfect - checks if a tree is perfect
* @tree: pointer to the root node
* Return: 0
*/
int tree_is_perfect(const binary_tree_t *tree)
{
int a = 0, b = 0;

if (tree->left && tree->right)
{
a = 1 + tree_is_perfect(tree->left);
b = 1 + tree_is_perfect(tree->right);
if (b == a && b != 0 && a != 0)
return (b);
return (0);
}
else if (!tree->left && !tree->right)
return (1);

else
return (0);

}

/**
* binary_tree_is_perfect - checks if binary tree is perfect or not a tree
* @tree: pointer to the root node
* Return: 1 if perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int res = 0;

if (tree == NULL)
return (0);

else
{
res = tree_is_perfect(tree);
if (res != 0)
return (1);

return (0);
}

}
