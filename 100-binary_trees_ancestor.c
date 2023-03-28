#include "binary_trees.h"

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
	const binary_tree_t *f_anc, *s_anc;

	for (f_anc = first; f_anc; f_anc = f_anc->parent)
		for (s_anc = second; s_anc; s_anc = s_anc->parent)
			if (f_anc == s_anc)
				return ((binary_tree_t *)f_anc);
	return (NULL);	
}
