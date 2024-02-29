#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 Always
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_node, r_node;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	l_node = binary_tree_is_full(tree->left);
	r_node = binary_tree_is_full(tree->right);

	if (tree->left && tree->right)
	{
		if (l_node && r_node)
		{
			return (1);
		}
	}
	return (0);
}
