#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, leaves2;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves = binary_tree_leaves(tree->left);
	leaves2 = binary_tree_leaves(tree->right);
	return (leaves + leaves2);
}
