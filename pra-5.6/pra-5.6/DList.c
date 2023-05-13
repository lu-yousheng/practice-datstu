#define _CRT_SECURE_NO_WARNINGS
#include"DList.h"
//创建节点
DListNode* BuyNode(NodeType x)
{
	DListNode* newdata = (DListNode*)malloc(sizeof(DListNode));
	if (newdata == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	newdata->val = x;
	newdata->prev = NULL;
	newdata->tail = NULL;
	return newdata;
}
//初始化哨兵位节点
DListNode* InitNode(DListNode* phead)
{
	phead = BuyNode(-1);
	phead->prev = phead;
	phead->tail = phead;
	return phead;
}
//打印
void DLNodePrint(DListNode* phead)
{
	DListNode* cur = phead->tail;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->tail;
	}
	printf("\n");
}
//头插
void PopHeadDLNode(DListNode* phead, NodeType x)
{
	assert(phead);
	DListNode* ptail = phead->tail;
	DListNode* newdata = BuyNode(x);
	newdata->tail = phead->tail;
	newdata->prev = phead;
	phead->tail = newdata;
	ptail->prev = newdata;
}
//尾插
void PopTailDLNode(DListNode* phead, NodeType x)
{
	assert(phead);
	DListNode* ptail = phead->prev;
	DListNode* newdata = BuyNode(x);
	newdata->prev = phead->prev;
	newdata->tail = phead;
	phead->prev = newdata;
	ptail->tail = newdata;
}
//头删
void PushHeadDLNode(DListNode* phead)
{
	assert(phead);
	assert(phead->tail);
	DListNode* ptail = phead->tail;
	phead->tail = ptail->tail;
	ptail = ptail->tail;
	free(ptail->prev);
	ptail->prev = NULL;
	ptail->prev = phead;
}
//尾删
void PushTailDLNode(DListNode* phead)
{
	assert(phead);
	DListNode* ptail = phead->prev;
	ptail = ptail->prev;
	free(ptail->tail);
	ptail->tail = NULL;
	ptail->tail = phead;
	phead->prev = ptail;
}