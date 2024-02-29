#include "binary_trees.h"
/**
 * tree_height_balance - Measures the height of a balanced binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the haight
 * Return: 0 Always
 */
size_t tree_height_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = tree->left ? 1 + tree_height_balance(tree->left) : 1;
	r_height = tree->right ? 1 + tree_height_balance(tree->right) : 1;
	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measeure the balance factor
 * Return: 0 Always
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_factor, l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree)
	{
		l_height = (int)tree_height_balance(tree->left);
		r_height = (int)tree_height_balance(tree->right);
		bal_factor = l_height - r_height;
	}
	return (bal_factor);
}
