#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t feuilles = 0;

	if (tree)
	{
		feuilles += (!tree->left && !tree->right) ? 1 : 0;
		feuilles += binary_tree_leaves(tree->left);
		feuilles += binary_tree_leaves(tree->right);
	}
	return (feuilles);
}
