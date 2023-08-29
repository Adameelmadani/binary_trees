#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert node at left of binary tree node
 * @parent: parent node
 * @value: value of node
 * Return: return pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = node;
		return (node);
	}
	node->left = parent->left;
	(node->left)->parent = node;
	parent->left = node;
	return (node);
}
