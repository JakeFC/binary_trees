#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree)
		return;
	node = tree;
	while (1)
	{
		if (node->left)
			node = node->left;
		else if (node->right)
			node = node->right;
		else if (node != tree)
		{
			if (node == node->parent->left)
				node->parent->left = NULL;
			else
				node->parent->right = NULL;
			free(node);
			node = tree;
		}
		else
		{
			free(node);
			break;
		}
	}
}
