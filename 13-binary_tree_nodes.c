#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: Number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes, nodes2;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = binary_tree_nodes(tree->left);
		nodes2 = binary_tree_nodes(tree->right);
		return (nodes + nodes2 + 1);
	}
	return (0);
}
