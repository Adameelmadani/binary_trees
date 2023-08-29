#include "binary_trees.h"


/**
 * binary_tree_inorder - traversing binary tree in inorder traversal
 * @tree: root node
 * @func: function used for each value of node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	inorder_recursive(tree, func);
}

/**
 * inorder_recursive - recursive function
 * @tree: root node
 * @func: function used for each value of node
 */
void inorder_recursive(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left != NULL)
		inorder_recursive(tree->left, func);
	(*func)(tree->n);
	if (tree->right != NULL)
		inorder_recursive(tree->right, func);
}
