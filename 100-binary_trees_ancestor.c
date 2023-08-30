#include "binary_trees.h"


/**
 * binary_trees_ancestor - find lowest ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: pointer of lowest ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp = second;

	if (first == NULL || second == NULL)
		return (NULL);
	while (first)
	{
		while (second)
		{
			if (second == first)
				return ((binary_tree_t *)second);
			second = second->parent;
		}
		first = first->parent;
		second = temp;
	}
	return (NULL);
}
