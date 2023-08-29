#include "binary_trees.h"


/**
 * binary_tree_delete - delete entire binary tree
 * @tree: pointer to the root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		binary_tree_delete_recursive(tree);
}

/**
 * binary_tree_delete_recursive - recursive function
 * @tree: pointer to root of tree(subtrees)
 */
void binary_tree_delete_recursive(binary_tree_t *tree)
{
	if (tree->left != NULL)
		binary_tree_delete_recursive(tree->left);
	if (tree->right != NULL)
		binary_tree_delete_recursive(tree->right);
	free(tree);
}
