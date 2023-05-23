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

//初始化
void QueueInit(Queue* que);

//先进
void QueuePush(Queue* que, QueType x);

//先出
void QueuePop(Queue* que);

//销毁
void DestroyQue(Queue* que);
