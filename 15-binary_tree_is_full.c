#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to check
 * Return: 1 else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height, nodes;

	if (tree == NULL)
		return (0);
	height = tree_height(tree);
	nodes = tree_nodes(tree);

	return (nodes == (1 << height) - 1);
}

/**
 * tree_height - function that measures the height of a binary tree
 * @tree: the tree whose height is to be evaluated
 * Return: height of tree, else 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = tree_height(tree->left);
	h_right = tree_height(tree->right);

	return (1 + (h_left > h_right ? h_left : h_right));
}
/**
 * tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: Number of leaves
 */

int tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + tree_nodes(tree->left) + tree_nodes(tree->right));
}
