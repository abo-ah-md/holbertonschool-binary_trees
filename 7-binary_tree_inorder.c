#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_inorder- prints the values of a tree in inorder
*@tree: tree to check
*@func: a function pointer
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
if (tree->left)
binary_tree_inorder(tree->left, func);

func(tree->n);

if (tree->right)
binary_tree_inorder(tree->right, func);
}
}
