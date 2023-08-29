#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert node at right of binary tree node
 * @parent: parent node
 * @value: value of node
 * Return: return pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = node;
		return (node);
	}
	node->right = parent->right;
	(node->right)->parent = node;
	parent->right = node;
	return (node);
}
