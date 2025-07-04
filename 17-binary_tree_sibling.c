#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_sibling - we get the node sibling
*@node: node to check
*Return: the sibling of the node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || node->parent == NULL)
return (NULL);

if (node->parent->left == node)
return (node->parent->right);

if (node->parent->right == node)
return (node->parent->left);

return (NULL);
}
