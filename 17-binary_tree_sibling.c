#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: Pointer to the node to find the sibling
 * Return: A pointer to the sibling node or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_sibling;

	node_sibling = malloc(sizeof(binary_tree_t));
	if (node_sibling == NULL)
	{
		return (NULL);
	}

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	node_sibling = node->parent->left;
	node_sibling = node->parent->right;
	return (node_sibling);
}
