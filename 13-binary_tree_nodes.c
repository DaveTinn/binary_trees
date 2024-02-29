#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with atleast 1 child
 * in a binary tree
 *
 * @tree: Pointer to the root of the tree to count the number of nodes
 * Return: 0 Always
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_counter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		node_counter++;
	}

	node_counter += binary_tree_nodes(tree->left);
	node_counter += binary_tree_nodes(tree->right);
	return (node_counter);
}
