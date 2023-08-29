#include "binary_trees.h"


/**
 * binary_tree_node - add node in binary tree
 * @parent: parent node
 * @value: value add in node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
			return (NULL);
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = NULL;
		return (node);
	}
	if (parent->left == NULL || parent->right == NULL)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
			return (NULL);
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
	} else
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		parent->right = node;
	}
	return (node);
}
