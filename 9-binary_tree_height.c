#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_height- gives the height of a tree
*@tree: tree to check
*Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
int h_right;
int h_left;
h_right = 0;
h_left = 0;

if(tree)
{

if(tree->left)
h_left = 1 + binary_tree_height(tree->left);

if(tree->right)
h_right = 1 + binary_tree_height(tree->right);

if(h_right > h_left)
return (h_right);
else
return (h_left);
}
return (0);
}
