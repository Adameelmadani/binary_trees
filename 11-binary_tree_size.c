#include "binary_trees.h"


size_t size_rec(const binary_tree_t *tree, size_t s);

/**
 * binary_tree_size - size of binary tree
 * @tree: node of root
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (size_rec(tree, 0));
}

/**
 * size_rec - recursive function
 * @tree: node of tree
 * @s: size
 * Return: size
 */
size_t size_rec(const binary_tree_t *tree, size_t s)
{
	s++;
	if (tree->left != NULL)
		s = size_rec(tree->left, 0) + s;
	if (tree->right != NULL)
		s = size_rec(tree->right, 0) + s;
	return (s);
}
