#pragma once

#include "BinaryTreeNode.h"

class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void SetRoot(BinaryTreeNode* root) { m_Root = root; }
	BinaryTreeNode* GetRoot() { return m_Root; }
	void InsertNode(int data);
	void PreOrderTraversal();
	void InOrderTraversal();
	void PostOrderTraversal();

private:
	BinaryTreeNode* m_Root;
	BinaryTreeNode* insertNode(BinaryTreeNode* node, int data);
	void preOrderTraversal(BinaryTreeNode* node);
	void inOrderTraversal(BinaryTreeNode* node);
	void postOrderTraversal(BinaryTreeNode* node);
};

