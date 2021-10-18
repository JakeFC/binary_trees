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

/**
 * binary_tree_preorder_2 - traverses a binary tree in preorder and returns
 * whether or not tree is full
 * @node: pointer to the node to traverse next
 * Return: 1 if node is perfect or NULL, 0 otherwise
 */
int binary_tree_preorder_2(const binary_tree_t *node)
{
	if (!node)
		return (1);
	if ((node->left && !node->right) || (node->right && !node->left) ||
		binary_tree_balance(node->left) != binary_tree_balance(node->right))
		return (0);
	return (binary_tree_preorder_2(node->left));
	return (binary_tree_preorder_2(node->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of a tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_preorder_2(tree));
}
