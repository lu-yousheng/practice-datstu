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
//初始化
void InitBTree(BinaryTree* pbt);

//销毁
void DestoryTree(BinaryTree* pbt);

//插入
void BTreePush(BinaryTree* pbt, TreeType);

//删除
void BTreePop(BinaryTree* pbt);

//取根元素
TreeType BTreeTop(BinaryTree* pbt);

void AdjustDown(TreeType* arry, int size, int begin);

//堆的创建
void HeapCreate(BinaryTree* pbt, TreeType* a, int n);

//堆排序
void HeapSort(BinaryTree* pbt);

//
void Swap(TreeType* a, TreeType* b);

