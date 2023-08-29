#include "binary_trees.h"


/**
 * binary_tree_depth - depth of node in binary tree
 * @tree: pointer of node
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t d = 0;

	if (tree == NULL)
		return (0);
	temp = temp->parent;
	while (temp)
	{
		d++;
		temp = temp->parent;
	}
	return (d);
}
