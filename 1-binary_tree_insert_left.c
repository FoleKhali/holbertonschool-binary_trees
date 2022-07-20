#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *p_node = NULL;

	if (parent == NULL)
		return (NULL);

	p_node = binary_tree_node(parent, value);
	if (p_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		p_node->left = parent->left;
		p_node->left->parent = p_node;
	}
	parent->left = p_node;

	return (p_node);

}
