#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count number of leaves
 * Return: 0 ALways
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_of_leaves, l_leaves, r_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);
	num_of_leaves = l_leaves + r_leaves;
	return (num_of_leaves);
}
