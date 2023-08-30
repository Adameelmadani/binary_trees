#include "binary_trees.h"


/**
 * binary_tree_sibling - search for sibling
 * @node: node to search for
 * Return: pointer to sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}

/**
 * binary_tree_uncle - uncle of node
 * @node: node to search for uncle
 * Return: pointer of uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
