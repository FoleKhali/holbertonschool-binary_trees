#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - creates a node in binary tree at insert in right
 * @parent: binary tree
 * @value: values
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = parent->right;
	if (newnode->right != NULL)
		newnode->right->parent = newnode;
	parent->right = newnode;
	return (newnode);
}
