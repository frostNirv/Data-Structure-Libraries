#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
	SetRoot(nullptr);
	std::cout << "A new binary search tree has been created." << std::endl;
}

BinarySearchTree::~BinarySearchTree()
{
	std::cout << "The binary search tree has been destroyed." << std::endl;
}

void BinarySearchTree::InsertNode(int data)
{
	SetRoot(insertNode(GetRoot(), data));
}

Node* BinarySearchTree::insertNode(Node* node, int data)
{
	if (node == nullptr)
	{
		node = new Node();
		node->SetData(data);
		node->SetLeftBinaryTreeNode(nullptr);
		node->SetRightBinaryTreeNode(nullptr);
	}
	else 
	{
		if (data < node->GetData())
			node->SetLeftBinaryTreeNode(insertNode(node->GetLeftBinaryTreeNode(), data));
		else
			node->SetRightBinaryTreeNode(insertNode(node->GetRightBinaryTreeNode(), data));
	}
	return node;
}

void BinarySearchTree::PreOrderTraversal()
{
	if (GetRoot() == nullptr)
	{ 
		std::cout << "No tree exists yet." << std::endl;
		return;
	}
	preOrderTraversal(GetRoot());
}

void BinarySearchTree::preOrderTraversal(Node* node)
{
	if (node == nullptr)
		return;
	std::cout << "The value of the node is " << node->GetData() << "." << std::endl;
	preOrderTraversal(node->GetLeftBinaryTreeNode());
	preOrderTraversal(node->GetRightBinaryTreeNode());
}

void BinarySearchTree::InOrderTraversal()
{
	if (GetRoot() == nullptr)
	{
		std::cout << "No tree exists yet." << std::endl;
		return;
	}
	inOrderTraversal(GetRoot());
}

void BinarySearchTree::PostOrderTraversal()
{
	postOrderTraversal(GetRoot());
}

void BinarySearchTree::inOrderTraversal(Node* node)
{
	if (node == nullptr)
		return;
	inOrderTraversal(node->GetLeftBinaryTreeNode());
	std::cout << "The value of the node is " << node->GetData() << "." << std::endl;
	inOrderTraversal(node->GetRightBinaryTreeNode());
}

void BinarySearchTree::postOrderTraversal(Node* node)
{
	if (node == nullptr)
		return;
	postOrderTraversal(node->GetLeftBinaryTreeNode());
	postOrderTraversal(node->GetRightBinaryTreeNode());
	std::cout << "The value of the node is " << node->GetData() << "." << std::endl;
}
