#include "binary_trees.h"

/**
 * recursive_postorder - recursive function used to traverse binary tree nodes
 * @node: pointer to the node to traverse next
 * @func: pointer to the function to call for each node's value
 */
void recursive_postorder(const binary_tree_t *node, void (*func)(int))
{
	if (!node)
		return;
	recursive_postorder(node->left, func);
	recursive_postorder(node->right, func);
	func(node->n);
}

/**
 * binary_tree_postorder - traverses a binary tree using in-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		recursive_postorder(tree, func);
}
