#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_node - adds a parent node to a pointer of node
*@parent: the parent node pointer
*@value: a number
*Return: adress of the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}
