#include "binary_trees.h"

/**
  * binary_tree_leaves -  a function that counts the leaves in a binary tree
  * @tree: pointer to the root node of the tree to count the number of leaves
  * Return: number of leaves, 0 if tree is NULL
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
	{
		if (tree->left->left == NULL && tree->left->right == NULL)
			return (1);
		leaves = leaves + binary_tree_leaves(tree->left);
	}
	if (tree->right != NULL)
	{
		if (tree->right->left == NULL && tree->right->right == NULL)
			return (1);
		leaves = leaves + binary_tree_leaves(tree->right);
	}
	return (leaves);
}
