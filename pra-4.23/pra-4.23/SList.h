#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int typeNode;
typedef struct SlistNode
{
	typeNode val;
	struct SLNode* next;

}SLNode;
//β���
void SLNodeAddEnd(SLNode** pplist, typeNode x);

//ͷ���
void SLNodeAddFront(SLNode** pplist, typeNode x);

//βɾ��
void SLNodeDeletEnd(SLNode** pplist);

//ͷɾ��
void SLNodeDeletFron(SLNode** pplist);

//����ɾ��
void SLNodeDeletFind(SLNode** pplist,typeNode x);

//���Ҽӡ�
void SLNodeAddFind(SLNode** pplist, typeNode x, typeNode y);

//���ҡ�
SLNode* Findval(SLNode** pos,typeNode x);

//��ӡ��
void SLNodePrint(SLNode* plist);