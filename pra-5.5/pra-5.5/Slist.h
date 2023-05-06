#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct SListNode
{
	int val;
	struct SListNode* next;
}SListNode;
//生成单链表
SListNode* CreatNode(int n);
//创造节点
SListNode* MallocNode(int n);
//打印链表
void SLNodePrint(SListNode* phead);
//比较排序
SListNode* ContrastSort(SListNode* plist,int x);