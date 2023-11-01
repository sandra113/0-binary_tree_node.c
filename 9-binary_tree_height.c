#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: the tree whose height is to be evaluated
 * Return: height of tree, else 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (h_left > h_right)
		return (h_left + 1);
	return (h_right + 1);
}
