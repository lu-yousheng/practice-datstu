#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int QueType;
typedef struct QueNode
{
	QueType val;
	struct QueNode* next;
}QueNode;

typedef struct Queue
{
	QueNode* head;
	QueNode* tail;
}Queue;

//��ʼ��
void QueueInit(Queue* que);

//�Ƚ�
void QueuePush(Queue* que, QueType x);

//�ȳ�
void QueuePop(Queue* que);

//����
void DestroyQue(Queue* que);
