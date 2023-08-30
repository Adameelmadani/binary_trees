#include "binary_trees.h"


/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: root node
 * Return: 1 if it is, 0 if it's not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (per_rec(tree, 0) == 0)
}
