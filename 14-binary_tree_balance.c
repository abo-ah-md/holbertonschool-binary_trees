#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_height_new- helper for balance factor
*@tree: tree to check
*Return: the balance of a tree
*/
int binary_tree_height_new(const binary_tree_t *tree)
{
int h_right;
int h_left;
h_right = 0;
h_left = 0;

if (tree)
{

if (tree->left)
h_left = 1 + binary_tree_height_new(tree->left);
 else if (tree->right)
h_right = 1 + binary_tree_height_new(tree->right);
 else
   return(0);
if (h_left >h_right)
  return (h_left);
  else
    return (h_right);
}
return (0);
}

/**
*binary_tree_balance- gives the balance of a tree
*@tree: tree to check
*Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
{
  return (binary_tree_height_new(tree->left) - binary_tree_height_new(tree->right));
}
else
return (0);
}
