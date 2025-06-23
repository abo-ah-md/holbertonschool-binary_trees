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
size = 0;
if (tree)
{
size = 1;
if (tree->right)
size += binary_tree_size(tree->right);
if (tree->left)
size += binary_tree_size(tree->left);
}

return (size);
}
/**
*binary_tree_is_full - gives the balance of a
* treechecks the tree is full or not
*@tree: tree to check
*Return: 1 if tree is full 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int check_R, check_L;

check_R = binary_tree_size(tree->right);
check_L = binary_tree_size(tree->left);

if (check_R == check_L)
return (1);

return (0);
}
