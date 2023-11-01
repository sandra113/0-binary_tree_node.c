#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: number of nodes in a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_size(tree->left);
	h_right = binary_tree_size(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (h_left + h_right + 1);
}
