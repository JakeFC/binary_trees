#include "binary_trees.h"

/**
 * recursive_preorder - recursive function used to traverse binary tree nodes
 * @node: pointer to the node to traverse next
 * @func: pointer to the function to call for each node's value
 */
void recursive_preorder(const binary_tree_t *node, void (*func)(int))
{
	if (!node)
		return;
	func(node->n);
	recursive_preorder(node->left, func);
	recursive_preorder(node->right, func);
}

/**
 * binary_tree_preorder - traverses a binary tree using pre-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to function to call for each node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		recursive_preorder(tree, func);
}
