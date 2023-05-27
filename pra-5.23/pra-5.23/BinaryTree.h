#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int TreeType;
typedef struct BinaryTree
{
	TreeType* arry;
	int size;
	int capacity;
}BinaryTree;

typedef struct BTNode
{
	int val;
	struct BTNode* left;
	struct BTNode* right;
}BTNode;
//��ʼ��
void InitBTree(BinaryTree* pbt);

//����
void DestoryTree(BinaryTree* pbt);

//����
void BTreePush(BinaryTree* pbt, TreeType);

//ɾ��
void BTreePop(BinaryTree* pbt);

//ȡ��Ԫ��
TreeType BTreeTop(BinaryTree* pbt);


