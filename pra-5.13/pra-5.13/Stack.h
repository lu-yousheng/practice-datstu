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


//初始化栈
void InitStack(Stack* st);

//销毁空间
void Destroy(Stack* st);

//打印
void StackPint(Stack* st);

//入栈
void Stackpush(Stack* st, StackType val);

//出栈
void StackPop(Stack* st);

//取出
StackType StackTop(Stack* st);

//栈大小
int StackSize(Stack* st);

//判空
bool Judge(Stack* st);
