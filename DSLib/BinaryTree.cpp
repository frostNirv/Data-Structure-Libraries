#include "BinaryTree.h"

BinaryTree::BinaryTree() : m_Root(nullptr)
{
	std::cout << "A tree has been created." << std::endl;
}

BinaryTree::~BinaryTree()
{
	std::cout << "The tree has been destroyed." << std::endl;
}

Node* BinaryTree::InsertNode(Node* node, int data)
{
	node = new Node();
	node->SetData(data);
	node->SetLeftBinaryTreeNode(nullptr);
	node->SetRightBinaryTreeNode(nullptr);
	return node;
}

void BinaryTree::InOrderTraversal()
{
	if (GetRoot() == nullptr)
	{
		std::cout << "No tree exists." << std::endl;
		return;
	}
	inOrderTraversal(GetRoot());
}

void BinaryTree::inOrderTraversal(Node* node)
{
	if (node == nullptr)
		return;
	inOrderTraversal(node->GetLeftBinaryTreeNode());
	std::cout << "The value of the node is " << node->GetData() << std::endl;
	inOrderTraversal(node->GetRightBinaryTreeNode());
}

void BinaryTree::PreOrderTraversal()
{
	if (GetRoot() == nullptr)
	{
		std::cout << "No tree exists." << std::endl;
		return;
	}
	preOrderTraversal(GetRoot());
}

void BinaryTree::preOrderTraversal(Node* node)
{
	if (node == nullptr)		
		return;
	std::cout << "The value of the node is " << node->GetData() << std::endl;
	preOrderTraversal(node->GetLeftBinaryTreeNode());
	preOrderTraversal(node->GetRightBinaryTreeNode());
}

void BinaryTree::PostOrderTraversal()
{
	if (GetRoot() == nullptr)
	{
		std::cout << "No tree exists." << std::endl;
		return;
	}
	postOrderTraversal(GetRoot());
}

void BinaryTree::postOrderTraversal(Node* node)
{
	if (node == nullptr)
		return;
	std::cout << "The value of the node is " << node->GetData() << std::endl;
	postOrderTraversal(node->GetLeftBinaryTreeNode());
	postOrderTraversal(node->GetRightBinaryTreeNode());
}
