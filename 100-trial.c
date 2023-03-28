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

/**
  * binary_tree_uncle - a function that finds the uncle of a node
  * @node: pointer to the node to find the uncle
  * Return: pointer to the uncle node or NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL)
		return (NULL);
	tmp = binary_tree_sibling(node->parent);
	return (tmp);
}

/**
  * binary_trees_ancestor - a function that finds the lowest common ancestor
  * of two nodes
  * @first: pointer to the first node
  * @second: pointer to the second node
  * Return: pointer to the lowest common ancestor node of the two given nodes
  * otherwise return NULL
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == NULL && second == NULL)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent == binary_tree_sibling(second->parent))
		return (first->parent->parent);
	if (first->parent == second)
	{
		tmp = second;
		return (tmp);
	}
	if (first == second->parent)
	{
		tmp = first;
		return (tmp);
	}
	return (NULL);
}
