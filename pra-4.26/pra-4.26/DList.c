#define _CRT_SECURE_NO_WARNINGS
#include"DList.h"
DListNode* newNode(TypeNode x)
{
	DListNode* tmp = (DListNode*)malloc(sizeof(DListNode));
	if (tmp == NULL)
	{
		exit(-1);
	}
	else
	{
		tmp->pre = NULL;
		tmp->tail = NULL;
		tmp->val = x;
		return tmp;
	}
}

//初始化头结点
void InitDListNode(DListNode* plist)
{
	DListNode* phead = newNode(plist);
	phead->pre = phead;
	phead->tail = phead;
	plist = phead;
}
void Destroy(DListNode* plist)
{
	free(plist);
	plist = NULL;
}
void AddFrontDLNode(DListNode* plist, TypeNode x)
{
	DListNode* newdata = newNode(plist);
	plist->tail = newdata;
	plist->pre = newdata;
	newdata->pre = plist;
	newdata->tail = plist;

}