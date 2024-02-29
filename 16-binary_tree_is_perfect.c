#include "binary_trees.h"
/**
 * b_tree_height - Measures the height for the perfect binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 * Return: 0 Always
 */
int b_tree_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = tree->left ? 1 + b_tree_height(tree->left) : 1;
	r_height = tree->right ? 1 + b_tree_height(tree->right) : 1;
	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 Always
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height, l_perfect, r_perfect;

	if (tree == NULL)
	{
		return (0);
	}

	l_height = b_tree_height(tree->left);
	r_height = b_tree_height(tree->right);

	if (l_height == r_height)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		l_perfect = binary_tree_is_perfect(tree->left);
		r_perfect = binary_tree_is_perfect(tree->right);

		return (l_perfect && r_perfect);
	}
	return (0);
}
