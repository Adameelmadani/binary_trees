#include "binary_trees.h"


int full_recursive(const binary_tree_t *tree, int f);

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: root node
 * Return: 1 if it is, 0 if it's not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (full_recursive(tree, 0) == 0)
		return (1);
	return (0);
}

/**
 * full_recursive - recursive function
 * @tree: root of node
 * @f: integer to check if a node has either 0 or 2 children
 * Return: integer f
 */
int full_recursive(const binary_tree_t *tree, int f)
{
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		f += 1;
	else if (tree->left || tree->right)
	{
		if (tree->left)
			f += full_recursive(tree->left, 0);
		if (tree->right)
			f += full_recursive(tree->right, 0);
	}
	return (f);
}
