#include "binary_trees.h"


/**
 * binary_tree_rotate_left - rotate left a binary tree
 * @tree: old root node of tree
 * Return: pointer to new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (NULL);
	new_tree = tree->right;

	tree->parent = new_tree;
	tree->right = new_tree->left;

	new_tree->parent = NULL;
	new_tree->left = tree;

	if (tree->right != NULL)
		(tree->right)->parent = tree;

	return (new_tree);
}
