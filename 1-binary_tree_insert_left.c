#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
