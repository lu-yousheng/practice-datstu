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


