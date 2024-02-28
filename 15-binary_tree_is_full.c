#include "binary_trees.h"

/**
 * recursive_is_full - check if a binary is full recursive
 * @tree: pointer to the root node of the tree to check
 * Return: integer
 */
int recursive_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			recursive_is_full(tree->left) == 0 ||
			recursive_is_full(tree->right) == 0)

			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: integer
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		return (recursive_is_full(tree));
	}
	return (0);

}
