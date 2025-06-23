#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_uncle - check for uncle in a binary tree
*@node: node to check
*Return: the uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !node->parent->parent)
return (NULL);

if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);

if (node->parent->parent->right == node->parent)
return (node->parent->parent->left);

return (0);
}
