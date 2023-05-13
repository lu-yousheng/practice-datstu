#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int NodeType;
typedef struct DListNode
{
	struct DListNode* prev;
	struct DListNode* tail;
	NodeType val;
}DListNode;
//��ʼ���ڱ�λ�ڵ�
DListNode* InitNode(DListNode* phead);
DListNode* BuyNode(NodeType x);
void PopHeadDLNode(DListNode* phead, NodeType x);
void PopTailDLNode(DListNode* phead, NodeType x);
void PushHeadDLNode(DListNode* phead);
void PushTailDLNode(DListNode* phead);
void DLNodePrint(DListNode* phead);