#include "BinarySearchTree.h"
#include "BinaryTree.h"

int main()
{
	// Binary search tree 
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Binary Search Tree" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	BinarySearchTree* bst = new BinarySearchTree();
	bst->InsertNode(100);
	bst->InsertNode(20);
	bst->InsertNode(40);
	bst->InsertNode(10);
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Results in In-Order Traversal" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bst->InOrderTraversal();
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Results in Pre-Order Traversal" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bst->PreOrderTraversal();
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Results in Post-Order Traversal" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bst->PostOrderTraversal();
	delete bst;

	// Binary tree
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Binary Tree" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	BinaryTree* bt = new BinaryTree();
	bt->SetRoot(bt->InsertNode(bt->GetRoot(), 10));
	bt->GetRoot()->SetLeftBinaryTreeNode(bt->InsertNode(bt->GetRoot()->GetLeftBinaryTreeNode(), 20));
	bt->GetRoot()->SetRightBinaryTreeNode(bt->InsertNode(bt->GetRoot()->GetRightBinaryTreeNode(), 5));
	bt->GetRoot()->GetLeftBinaryTreeNode()->SetLeftBinaryTreeNode(bt->InsertNode(bt->GetRoot()->GetLeftBinaryTreeNode()->GetLeftBinaryTreeNode(), 100));
	bt->GetRoot()->GetLeftBinaryTreeNode()->SetRightBinaryTreeNode(bt->InsertNode(bt->GetRoot()->GetLeftBinaryTreeNode()->GetRightBinaryTreeNode(), 40));
	bt->GetRoot()->GetRightBinaryTreeNode()->SetLeftBinaryTreeNode(bt->InsertNode(bt->GetRoot()->GetRightBinaryTreeNode()->GetLeftBinaryTreeNode(), 50));
	bt->GetRoot()->GetRightBinaryTreeNode()->SetRightBinaryTreeNode(bt->InsertNode(bt->GetRoot()->GetRightBinaryTreeNode()->GetRightBinaryTreeNode(), 1));
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Results in In-Order Traversal" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bt->InOrderTraversal();
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Results in Pre-Order Traversal" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bt->PreOrderTraversal();
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Results in Post-Order Traversal" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bt->PostOrderTraversal();
	delete bt;
	return 0;
}