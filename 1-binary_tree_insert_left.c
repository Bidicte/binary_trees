#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child.
 * @parent: A pointer.
 * @value: The value
 *
 * Return: 0 or 1 .
 *
 * Description:the nouveau node takes its place.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau;

	if (parent == NULL)
		return (NULL);

	nouveau = binary_tree_node(parent, value);
	if (nouveau == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nouveau->left = parent->left;
		parent->left->parent = nouveau;
	}
	parent->left = nouveau;

	return (nouveau);
}
