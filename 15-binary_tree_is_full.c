#include "binary_trees.h"

/**
 * binary_tree_preorder_3 - traverses a binary tree in preorder and returns
 * balance factor
 * @node: pointer to the node to traverse next
 * Return: 1 if node is full or NULL, 0 otherwise
 */
int binary_tree_preorder_3(const binary_tree_t *node)
{
	if (!node)
		return (1);
	if ((node->left && !node->right) || (node->right && !node->left) ||
		binary_tree_preorder_3(node->left) != binary_tree_preorder_3(node->right))
		return (0);
	return (binary_tree_preorder_3(node->left));
	return (binary_tree_preorder_3(node->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of a tree to check
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_preorder_3(tree));
}
