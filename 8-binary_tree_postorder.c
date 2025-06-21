#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_postorder- prints the values of a tree in postorder
*@tree: tree to check
*@func: a function pointer
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
if (tree->left)
binary_tree_postorder(tree->left, func);

if (tree->right)
binary_tree_postorder(tree->right, func);

func(tree->n);

}
}
