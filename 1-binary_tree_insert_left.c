#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a left-child node of another node,
 * if parent node already has left-child the new node takes its place
 * and the old left-child is set as the left-child of the new node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to be stored in the new node
 * Return: pointer to the created node or NULL on failure or in the case
 * of the 'parent' pointer being NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
return (NULL);

new = binary_tree_node(parent, value);

if (new == NULL)
return (NULL);

if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}

parent->left = new;

return (new);
}
