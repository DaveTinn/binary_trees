#include "binary_trees.h"
/**
 * binary_tree_preorder - Pre-order traversal of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*Calls function to procces the current node*/
	func(tree->n);
	/*traverse the left sybtree recursively*/
	binary_tree_preorder(tree->left, func);
	/*travers the right subtree recursively*/
	binary_tree_preorder(tree->right, func);
}
