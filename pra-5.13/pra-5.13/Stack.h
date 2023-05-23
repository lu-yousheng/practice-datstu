#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


#define INITSIZE 4
#define EXTEND 2

typedef int StackType;
typedef struct Stack
{
	StackType* arr;
	int top;
	int capacity;
}Stack;


//��ʼ��ջ
void InitStack(Stack* st);

//���ٿռ�
void Destroy(Stack* st);

//��ӡ
void StackPint(Stack* st);

//��ջ
void Stackpush(Stack* st, StackType val);

//��ջ
void StackPop(Stack* st);

//ȡ��
StackType StackTop(Stack* st);

//ջ��С
int StackSize(Stack* st);

//�п�
bool Judge(Stack* st);
