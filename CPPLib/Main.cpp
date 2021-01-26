#include "BinarySearchTree.h"

int main()
{
	BinarySearchTree* bst = new BinarySearchTree();
	bst->InsertNode(100);
	bst->InsertNode(20);
	bst->InsertNode(40);
	bst->InsertNode(10);
	bst->InOrderTraversal();
	delete bst;
	return 0;
}