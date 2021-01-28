#pragma once

#include <iostream>
#include <string>

class Node
{
public:
	Node() : m_Data(0), m_Left(nullptr), m_Right(nullptr) {}
	~Node() {}
	
	void SetData(int data) { m_Data = data; }
	int GetData() { return this->m_Data; }

	// Utility methods for left and right pointers of a binary tree
	void SetLeftBinaryTreeNode(Node* left) { m_Left = left; }
	Node* GetLeftBinaryTreeNode() { return this->m_Left; }
	void SetRightBinaryTreeNode(Node* right) { m_Right = right; }
	Node* GetRightBinaryTreeNode() { return this->m_Right; }

private:
	int m_Data;
	Node* m_Left;
	Node* m_Right;
};

