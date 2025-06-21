#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_insert_right - adds a right child node to
*a pointer of parent node
*@parent: the parent node pointer
*@value: a number
*Return: adress of the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (parent == NULL)
return (NULL);


node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);

node->n = value;

if (parent->right != NULL)
{
node->right = parent->right;
node->right->parent = node;
}
else
node->right = NULL;

parent->right = node;
node->left = NULL;
node->parent = parent;
return (node);
}
