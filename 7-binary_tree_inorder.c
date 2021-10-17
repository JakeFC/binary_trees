#include "binary_trees.h"

/**
 * recursive_inorder - recursive function used to traverse binary tree nodes
 * @node: pointer to the node to traverse next
 * @func: pointer to the function to call for each node's value
 */
void recursive_inorder(const binary_tree_t *node, void (*func)(int))
{
	if (!node)
		return;
	recursive_inorder(node->left, func);
	func(node->n);
	recursive_inorder(node->right, func);
}

/**
 * binary_tree_inorder - traverses a binary tree using in-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		recursive_inorder(tree, func);
}
