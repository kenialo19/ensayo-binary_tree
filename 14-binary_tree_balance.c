#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree.
 *
 * Return: If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t j, i;

	if (tree == NULL)
		return (0);

	j = binary_tree_height(tree->left);
	i = binary_tree_height(tree->right);
	return (j - i);

}

/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Void.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t j = 0, i = 0;

	if (!tree)
		return (0);

	j = binary_tree_height(tree->left);
	i = binary_tree_height(tree->right);

	if (j < i)
		return (i + 1);
	else
		return (j + 1);
}
