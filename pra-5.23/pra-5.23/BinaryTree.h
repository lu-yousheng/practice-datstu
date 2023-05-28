#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

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

void AdjustDown(TreeType* arry, int size, int begin);

//�ѵĴ���
void HeapCreate(BinaryTree* pbt, TreeType* a, int n);

//������
void HeapSort(BinaryTree* pbt);

//
void Swap(TreeType* a, TreeType* b);

