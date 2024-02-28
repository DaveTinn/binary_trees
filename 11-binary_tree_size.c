#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: 0 Always
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size, l_size, r_size;

	if (tree == NULL)
	{
		return (0);
	}
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	tree_size = l_size + r_size + 1;

	return (tree_size);
}
