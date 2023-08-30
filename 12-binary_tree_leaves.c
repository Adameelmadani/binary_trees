#include "binary_trees.h"


size_t lv_rec(const binary_tree_t *tree, size_t c);

/**
 * binary_tree_leaves - count leaves of binary tree
 * @tree: root of node
 * Return: return number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (lv_rec(tree, 0));
}

/**
 * lv_rec - recursive function
 * @tree: root of node
 * @c: count
 * Return: return count
 */
size_t lv_rec(const binary_tree_t *tree, size_t c)
{
	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left != NULL)
			c += lv_rec(tree->left, 0);
		if (tree->right != NULL)
			c += lv_rec(tree->right, 0);
	}
	else
		c++;
	return (c);
}
