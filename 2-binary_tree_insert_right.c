#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t)), *temp;

	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	return (new_node);
}
