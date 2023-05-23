#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"InitStack
#include"queue.h"

void test1(char * s)
{
	//Stack st;
	//InitStack(&st);
	//Stackpush(&st, 1);
	//Stackpush(&st, 2);
	//Stackpush(&st, 3);
	//Stackpush(&st, 4);
	//Stackpush(&st, 5);
	//StackPop(&st);
	//StackPop(&st);
	//
	//StackPint(&st);
	//printf("%d ", StackSize(&st));
	//Destroy(&st);
	Stack st;
	InitStack(&st);
	while (*s!='\0')
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			Stackpush(&st, *s);
		}
		else if (*s == ')' || *s == ']' || *s == '}')
		{
			if (Judge == true)
				return false;
			if ((*s == ')' && StackTop == '(') ||
				(*s == ']' && StackTop == '[') ||
				(*s == '}' && StackTop == '{'))
			{
				StackPop(&st);
			}
		}
	}
	if (Judge == true)
		return true;
	else
		return false;

}

void test2()
{
	Queue que;
	QueueInit(&que);
	QueuePush(&que, 1);
	QueuePush(&que, 2);
	QueuePush(&que, 3);
	QueuePop(&que);
	QueuePop(&que);
	QueuePop(&que);

	DestroyQue(&que);
}
int main()
{
	char s = "(){}";
	test1(&s);

	//test2();
	return 0;
}