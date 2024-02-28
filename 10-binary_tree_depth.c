#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 * Return: 0 Always
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p_depth;

	if (tree == NULL)
	{
		return (0);
	}
	p_depth = (tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	return (p_depth);
}
