#include "binary_trees.h"

/**
  * binary_tree_is_full - a function that checks if a binary tree is full
  * @tree: pointer to the root node of the tree to check
  * Return: 1 if full, 0 if not
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		left_h = 1 + binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		right_h = 1 + binary_tree_is_full(tree->right);
	if (left_h == right_h)
		return (1);
	return (0);
}
