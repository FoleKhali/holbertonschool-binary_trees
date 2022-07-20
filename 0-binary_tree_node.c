#include "binary_trees.h"

/**
 * binary_tree_node - creates a node in binary tree
 * @parent: parent node
 * @value: values
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree_n = NULL;

	binary_tree_n = malloc(sizeof(binary_tree_t));
	if (binary_tree_n == NULL)
		return (NULL);
	binary_tree_n->parent = parent;
	binary_tree_n->n = value;
	binary_tree_n->left = NULL;
	binary_tree_n->right = NULL;
	return (binary_tree_n);
}
