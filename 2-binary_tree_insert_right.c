#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the new node, or NULL on failure or NULL parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	else
		node->right = NULL;
	node->left = NULL;
	parent->right = node;
	return (node);
}
