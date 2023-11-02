#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: the tree whose balance factor is to be evaluated
 * Return: balance factor of the tree, else 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = tree_height(tree->left);
	h_right = tree_height(tree->right);

	return (h_left - h_right);
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
