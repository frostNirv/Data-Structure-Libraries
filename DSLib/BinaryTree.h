#pragma once

#include "Node.h"

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	void SetRoot(Node* root) { m_Root = root; }
	Node* GetRoot() { return m_Root; }

	Node* InsertNode(Node* node, int data);
	void InOrderTraversal();
	void PreOrderTraversal();
	void PostOrderTraversal();

private:
	void inOrderTraversal(Node* node);
	void preOrderTraversal(Node* node);
	void postOrderTraversal(Node* node);

	Node* m_Root;
};

