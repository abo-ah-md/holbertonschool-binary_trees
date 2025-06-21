#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_is_full - gives the balance of a
* treechecks the tree is full or not
*@tree: tree to check
*Return: 1 if tree is full 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
  int check_R, check_L;
check_R= 1;
check_L= 1;

if (tree)
{

if (tree->left)
 check_L = binary_tree_is_full(tree->left);

if (tree->right)
check_R = binary_tree_is_full(tree->right);

if (check_R == 0 || check_L == 0)
return (0);

if (!tree->left && !tree->right)
return (1);

if (tree->left && !tree->right)
return (0);

if (tree->right && !tree->left)
return (0);

if (tree->left && tree->right)
return (1);
}
return (0);
}
