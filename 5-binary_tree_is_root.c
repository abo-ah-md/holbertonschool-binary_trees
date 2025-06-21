#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_is_root- check if a node is a root
*@node:a node pointer
*Return: 1 if is root 0 on NULL node and is no root
*/
int binary_tree_is_root(const binary_tree_t *node)
{

if (!node)
return (0);

if (node->parent == NULL)
return (1);
else
return (0);
}
