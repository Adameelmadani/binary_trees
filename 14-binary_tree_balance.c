#include "binary_trees.h"


size_t height_recursive(const binary_tree_t *tree, size_t h);
size_t b_t_h(const binary_tree_t *tree);

/**
 * binary_tree_balance - mesure the balance factore of tree
 * @tree: tree
 * Return: return balance factore
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (b_t_h(tree->left) - b_t_h(tree->right));
}

/**
 * b_t_h - return height of binary tree
 * @tree: root of node
 * Return: height
 */
size_t b_t_h(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
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
