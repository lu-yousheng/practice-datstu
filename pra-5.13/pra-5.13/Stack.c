#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
void InitStack(Stack* st)
{
	assert(st->arr);
	StackType* tmp = (StackType*)malloc(sizeof(StackType) * INITSIZE);
	if (tmp == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	st->arr = tmp;
	st->capacity = INITSIZE;
	st->top = -1;
}


void Destroy(Stack* st)
{
	assert(st);
	free(st->arr);
	st->arr = NULL;
}

void StackPint(Stack* st)
{
	int i = 0;
	for (i = 0;i <= st->top;i++)
	{
		printf("%d ", st->arr[i]);
	}
	printf("\n");
}

void Stackpush(Stack* st, StackType val)
{
	if (st->top+1 == st->capacity)
	{
		StackType* tmp = (StackType*)realloc(st->arr, 
			sizeof(StackType) * (st->capacity + EXTEND));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		st->capacity += EXTEND;
		st->arr = tmp;
	}
	st->top++;
	st->arr[st->top] = val;
}
void StackPop(Stack* st)
{
	assert(st);
	st->arr[st->top] = 0;
	st->top--;
}
StackType StackTop(Stack* st)
{
	assert(st);
	if (Judge(st) == true)
		return 0;
	return st->arr[st->top];
}

int StackSize(Stack* st)
{
	if (Judge == true)
		return;
	return ++st->top;
}

bool Judge(Stack* st)
{
	if (st->top <= -1)
		return true;
	else
		return false;
}