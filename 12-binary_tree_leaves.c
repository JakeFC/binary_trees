#include "binary_trees.h"

/**
 * recursive_leaves - recursively counts the leaves of a binary tree
 * @node: pointer to the next node to add
 * Return: number of leaves in the tree
 */
int recursive_leaves(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (recursive_leaves(node->left) + recursive_leaves(node->right));
}
/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: number of leaves in the tree, or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (recursive_leaves(tree));
}
