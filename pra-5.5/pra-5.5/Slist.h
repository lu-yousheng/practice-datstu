#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct SListNode
{
	int val;
	struct SListNode* next;
}SListNode;
//���ɵ�����
SListNode* CreatNode(int n);
//����ڵ�
SListNode* MallocNode(int n);
//��ӡ����
void SLNodePrint(SListNode* phead);
//�Ƚ�����
SListNode* ContrastSort(SListNode* plist,int x);