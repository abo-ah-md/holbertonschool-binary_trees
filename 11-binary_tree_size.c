#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_size- gives the size of a tree
*@tree: tree to check
*Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

int size;
size = 1;
if (tree)
{
if (tree->right)
size += binary_tree_size(tree->right);
if (tree->left)
size += binary_tree_size(tree->left);
}

return (size);
}
