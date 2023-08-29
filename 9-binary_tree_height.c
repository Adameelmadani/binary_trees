#include "binary_trees.h"


size_t height_recursive(const binary_tree_t *tree, size_t h);

/**
 * binary_tree_height - return height of binary tree
 * @tree: root of node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height_recursive(tree, 0));
}

/**
 * height_recursive - recursive function
 * @tree: node of tree
 * @h: height
 * Return: height
 */
size_t height_recursive(const binary_tree_t *tree, size_t h)
{
	size_t l = h, r = h;

	if (tree->left != NULL)
		l = height_recursive(tree->left, h + 1);
	if (tree->right != NULL)
		r = height_recursive(tree->right, h + 1);

	if (l > r)
		return (l);
	return (r);
}
