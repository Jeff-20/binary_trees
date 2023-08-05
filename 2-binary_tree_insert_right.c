#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right-child node of another node,
 * if parent node already has right-child the new node takes its place
 * and the old right-child is set as the right-child of the new node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to be stored in the new node
 * Return: pointer to the created node or NULL on failure or in the case
 * of the 'parent' pointer being NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
return (NULL);

new = binary_tree_node(parent, value);

if (new == NULL)
return (NULL);

if (parent->right != NULL)
{
new->right = parent->right;
parent->right->parent = new;
}

parent->right = new;

return (new);
}
