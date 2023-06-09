#include "binary_trees.h"

/**
  * binary_tree_sibling - a function that finds the sibling of a node
  * @node: pointer to the node to find the sibling
  * Return: a pointer to the sibling node
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	temp = node->parent;
	if (temp == NULL)
		return (NULL);
	if (temp->left == node && temp->right != NULL)
		return (temp->right);
	if (temp->right == node && temp->left != NULL)
		return (temp->left);
	return (NULL);
}
