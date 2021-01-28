#pragma once

#include "Node.h"

class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void SetRoot(Node* root) { m_Root = root; }
	Node* GetRoot() { return m_Root; }
	void InsertNode(int data);
	void PreOrderTraversal();
	void InOrderTraversal();
	void PostOrderTraversal();

private:
	Node* m_Root;
	Node* insertNode(Node* node, int data);
	void preOrderTraversal(Node* node);
	void inOrderTraversal(Node* node);
	void postOrderTraversal(Node* node);
};

