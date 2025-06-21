#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_depth- gives the depth of a tree
*@tree: tree to check
*Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{

int depth;
depth = 0;
if (tree)
{

while (tree->parent)
{
depth++;
tree = tree->parent;
}

}
return (depth);
}
