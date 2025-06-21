#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_insert_left - adds a left child node to
*a pointer of parent node
*@parent: the parent node pointer
*@value: a number
*Return: adress of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;

node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
if (parent == NULL)
return (NULL);

node->n = value;

if (parent->left != NULL)
{
node->left = parent->left;
node->left->parent = node;
}
else
node->left = NULL;

parent->left = node;
node->right = NULL;
node->parent = parent;
return (node);
}
