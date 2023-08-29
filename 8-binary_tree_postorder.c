#include "binary_trees.h"


/**
 * binary_tree_postorder - traversing binary tree in postorder traversal
 * @tree: root node
 * @func: function used for each value of node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	postorder_recursive(tree, func);
}

/**
 * postorder_recursive - recursive function
 * @tree: root node
 * @func: function used for each value of node
 */
void postorder_recursive(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left != NULL)
		postorder_recursive(tree->left, func);
	if (tree->right != NULL)
		postorder_recursive(tree->right, func);
	(*func)(tree->n);
}
