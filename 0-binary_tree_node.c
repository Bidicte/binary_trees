#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer.
 * @value: The value.
 *
 * Return: 0 or 1.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau;

	nouveau = malloc(sizeof(binary_tree_t));
	if (nouveau == NULL)
		return (NULL);

	nouveau->n = value;
	nouveau->parent = parent;
	nouveau->left = NULL;
	nouveau->right = NULL;

	return (nouveau);
}
