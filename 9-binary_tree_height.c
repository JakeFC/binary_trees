#include "binary_trees.h"

/**
 * maximum - finds the heighest between two numbers
 * @a: integer input
 * @b: integer input
 * Return: the higher number
 */
int maximum(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
/**
 * recursive_height - recursive function used to find binary tree height
 * @node: pointer to the node to traverse next
 * Return: height of the tree
 */
int recursive_height(const binary_tree_t *node)
{
	if (!node)
		return (-1);
	return (maximum(recursive_height(node->left), recursive_height(node->right))
			+ 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_height(tree));
}
