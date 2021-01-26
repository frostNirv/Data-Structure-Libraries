#pragma once

#include <iostream>
#include <string>

class BinaryTreeNode
{
public:
	BinaryTreeNode() : m_Data(0), m_Left(nullptr), m_Right(nullptr) {}
	~BinaryTreeNode() {}
	
	void SetData(int data) { m_Data = data; }
	int GetData() { return m_Data; }
	void SetLeftBinaryTreeNode(BinaryTreeNode* left) { m_Left = left; }
	BinaryTreeNode* GetLeftBinaryTreeNode() { return m_Left; }
	void SetRightBinaryTreeNode(BinaryTreeNode* right) { m_Right = right; }
	BinaryTreeNode* GetRightBinaryTreeNode() { return m_Right; }

public:
	int m_Data;
	BinaryTreeNode* m_Left;
	BinaryTreeNode* m_Right;

};

