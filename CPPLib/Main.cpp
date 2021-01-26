#include "BinarySearchTree.h"

int main()
{
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
	delete bst;
	return 0;
}