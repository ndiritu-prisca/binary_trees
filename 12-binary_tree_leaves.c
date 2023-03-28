#include "binary_trees.h"

/**
  * binary_tree_leaves -  a function that counts the leaves in a binary tree
  * @tree: pointer to the root node of the tree to count the number of leaves
  * Return: number of leaves, 0 if tree is NULL
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total_leaves = 0, left_l = 0, right_l = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_l = left_l + binary_tree_leaves(tree->left);
	right_l = right_l + binary_tree_leaves(tree->right);
	total_leaves = left_l + right_l;
	return (total_leaves);
}
