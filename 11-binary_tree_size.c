#include "binary_trees.h"

/**
  * binary_tree_size - a function that measures the size of a binary tree
  * @tree: pointer to the root node of the tree to measure the size
  * Return: size of tree, 0 if tree is NULL
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		size = size + binary_tree_size(tree->left);
	if (tree->right != NULL)
		size = size + binary_tree_size(tree->right);
	size = size + 1;
	return (size);
}
