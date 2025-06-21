#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_is_leaf - check if a node is a leaf
*@node:a node pointer
*Return: 1 if is leaf 0 on NULL node and is no leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{

if (!node)
return (0);

if (node->right == NULL && node->left == NULL)
return (1);
else
return (0);
}
