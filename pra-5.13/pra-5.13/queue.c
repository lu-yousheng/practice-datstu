#define _CRT_SECURE_NO_WARNINGS
#include"queue.h"

//³õÊ¼»¯
void QueueInit(Queue* que)
{
	que->head = NULL;
	que->tail = NULL;
}

void QueuePush(Queue* que, QueType x)
{
	assert(que);
	QueNode* tmp = (QueNode*)malloc(sizeof(QueNode));
	if (tmp == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	tmp->val = x;
	tmp->next = NULL;
	if (que->head == NULL)
	{
		que->head = tmp;
		que->tail = que->head;
	}
	else
	{
		que->tail->next = tmp;
		que->tail = que->tail->next;
	}
}

void QueuePop(Queue* que)
{
	assert(que);
	if (que->tail == que->head && que->head == NULL)
		return;
	QueNode* cur = que->head;
	que->head = que->head->next;
	free(cur);
	cur = NULL;
}

void DestroyQue(Queue* que)
{
	assert(que);
	while (que->head != NULL)
	{
		QueNode* cur = que->head;
		que->head = que->head->next;
		free(cur);
		cur = NULL;
	}
}