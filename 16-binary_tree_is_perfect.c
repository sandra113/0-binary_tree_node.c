#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to check
 * Return: 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaves, leaves2, nodes;

	if (tree == NULL)
		return (0);
	nodes = tree_nodes(tree);
	leaves = tree_leaves(tree);
	leaves2 = (nodes + 1) / 2;
	if (leaves2 == leaves)
		return (1);

	return (0);
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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves
 */

int tree_leaves(const binary_tree_t *tree)
{
	int leaves, leaves2;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves = tree_leaves(tree->left);
	leaves2 = tree_leaves(tree->right);
	return (leaves + leaves2);
}
