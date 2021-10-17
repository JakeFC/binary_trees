#include "binary_trees.h"

/**
 * recursive_size - recursively finds the size of a binary tree
 * @node: pointer to the next node to add
 * Return: number of nodes in the tree
 */
int recursive_size(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (recursive_size(node->left) + recursive_size(node->right) + 1);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: number of nodes in the tree, or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (recursive_size(tree));
}
