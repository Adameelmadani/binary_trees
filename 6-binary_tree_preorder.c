#include "binary_trees.h"


/**
 * binary_tree_preorder - traversing binary tree in preorder traversal
 * @tree: root node
 * @func: function used for each value of node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	preorder_recursive(tree, func);
}

/**
 * preorder_recursive - recursive function
 * @tree: root node
 * @func: function used for each value of node
 */
void preorder_recursive(const binary_tree_t *tree, void (*func)(int))
{
	(*func)(tree->n);
	if (tree->left != NULL)
		preorder_recursive(tree->left, func);
	if (tree->right != NULL)
		preorder_recursive(tree->right, func);
}
