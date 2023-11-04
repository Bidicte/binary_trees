#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * @parent: A pointer
 * @value: The value
 *
 * Return: 0 or 1
 *
 * Description: If parent already has a right-child.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau;

	if (parent == NULL)
		return (NULL);

	nouveau = binary_tree_node(parent, value);
	if (nouveau == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nouveau->right = parent->right;
		parent->right->parent = nouveau;
	}
	parent->right = nouveau;

	return (nouveau);
}
