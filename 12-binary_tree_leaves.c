#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_leaves- counts the leaves of a tree
*@tree: tree to check
*Return: the number of the tree leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{

int leaves;
leaves = 0;
if (tree)
{
leaves += binary_tree_leaves(tree->right);
leaves += binary_tree_leaves(tree->left);
if (!tree->left && !tree->right)
return (1);
}
return (leaves);
}
