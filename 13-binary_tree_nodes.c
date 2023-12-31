#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t noeuds = 0;

	if (tree)
	{
		noeuds += (tree->left || tree->right) ? 1 : 0;
		noeuds += binary_tree_nodes(tree->left);
		noeuds += binary_tree_nodes(tree->right);
	}
	return (noeuds);
}
