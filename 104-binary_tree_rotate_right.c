#include "binary_trees.h"


/**
 * binary_tree_rotate_right - rotate right a binary tree
 * @tree: old root node of tree
 * Return: pointer to new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (NULL);
	new_tree = tree->left;

	tree->parent = new_tree;
	tree->left = new_tree->right;

	new_tree->parent = NULL;
	new_tree->right = tree;

	if (tree->left != NULL)
		(tree->left)->parent = tree;

	return (new_tree);
}
