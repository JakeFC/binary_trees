#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: depth of the tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
