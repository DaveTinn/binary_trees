#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: A pointer to the lowest common ancestor node of the two given nodes,
 * or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f_ptr, *s_ptr;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	f_ptr = first->parent;
        s_ptr = second->parent;
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	if (f_ptr == NULL || first == s_ptr || (!f_ptr->parent && s_ptr))
	{
		return (binary_trees_ancestor(first, s_ptr));
	}
	else if (s_ptr == NULL || second == f_ptr || (!s_ptr->parent && f_ptr))
	{
		return (binary_trees_ancestor(second, f_ptr));
	}
	return (binary_trees_ancestor(f_ptr, s_ptr));
}
