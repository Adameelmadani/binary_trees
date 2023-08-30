#include "binary_trees.h"


size_t nd_rec(const binary_tree_t *tree, size_t n);

/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: root node
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (nd_rec(tree, 0));
}

/**
 * nd_rec - recursive function
 * @tree: root node
 * @n: number of counted nodes
 * Return: count
 */
size_t nd_rec(const binary_tree_t *tree, size_t n)
{
	if (tree->left != NULL || tree->right != NULL)
	{
		n++;
		if (tree->left != NULL)
			n += nd_rec(tree->left, 0);
		if (tree->right != NULL)
			n += nd_rec(tree->right, 0);
	}
	return (n);
}
