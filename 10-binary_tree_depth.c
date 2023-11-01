#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a tree
 * @tree: node to evaluate its depth
 * Return: depth of the node, else 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	if (tree->parent == NULL)
		return (0);
	return (depth + 1);
}
