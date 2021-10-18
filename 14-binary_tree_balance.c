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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of a tree to measure
 * Return: balance factor of the tree, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_height(tree->left) - recursive_height(tree->right));
}
