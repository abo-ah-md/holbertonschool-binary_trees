#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_nodes- counts the nodes with at lest 1 kid of a tree
*@tree: tree to check
*Return: the number of the nodes with at lest a kid leaves
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{

int nodes;
nodes = 0;
if (tree)
{
nodes +=  binary_tree_nodes(tree->right);
nodes +=  binary_tree_nodes(tree->left);
if (!tree->left && !tree->right)
return (0);

return (nodes + 1);
}
else
return (0);
}
