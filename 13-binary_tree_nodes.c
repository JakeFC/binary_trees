#include "binary_trees.h"

/**
 * recursive_parents - recursively counts the parent nodes of a binary tree
 * @node: pointer to the next node to add
 * Return: number of parent nodes in the tree
 */
int recursive_parents(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (recursive_parents(node->left) + recursive_parents(node->right) + 1);
	return (recursive_parents(node->left) + recursive_parents(node->right));
}
/**
 * binary_tree_nodes - counts the parent nodes of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: number of parent nodes in the tree, or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (recursive_parents(tree));
}
