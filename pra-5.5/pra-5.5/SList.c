#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"
//创建节点
SListNode* MallocNode(int n)
{
	SListNode* newdata = (SListNode*)malloc(sizeof(SListNode));
	if (newdata == NULL)
	{
		perror("MallocNode");
		exit(-1);
	}
	else
	{
		newdata->val = n;
		newdata->next = NULL;
	}
	return newdata;
}
//生成单链表
SListNode* CreatNode(int n)
{
	SListNode* phead = NULL, * tail=NULL;
	int i = 0;
	int node = 0;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &node);
		if (phead == NULL)
		{
			phead = MallocNode(node);
			tail = phead;
		}
		else
		{
			tail->next = MallocNode(node);
			tail = tail->next;
		}
	}
	return phead;
}
//打印链表
void SLNodePrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("\n");
}
//比较排序，将小于某值得节点排在其余节点前面---3 6 5 7 2--[5]--3 2 6 5 7
//SListNode* ContrastSort(SListNode* plist , int x)
//{
//	SListNode*cur,*newphead=NULL,*tail=NULL;
//	assert(plist);
//	cur = plist;
//	while (cur != NULL)
//	{
//		if (cur->val < x)
//		{
//			if (newphead == NULL)
//			{
//				newphead = MallocNode(cur->val);
//				tail = newphead;
//			}
//			else
//			{
//				tail->next = MallocNode(cur->val);
//				tail = tail->next;
//			}
//		}
//		cur = cur->next;
//	}
//	cur = plist;
//	while (cur != NULL)
//	{
//		if (cur->val >= x)
//		{
//			if (newphead == NULL)
//			{
//				newphead = MallocNode(cur->val);
//				tail = newphead;
//			}
//			else
//			{
//				tail->next = MallocNode(cur->val);
//				tail = tail->next;
//			}
//		}
//		cur = cur->next;
//	}
//	return newphead;
//}
//SListNode* ContrastSort(SListNode* plist, int x)
//{
//	SListNode* greathead, * greattail, * lesshead, * lesstail;
//	greathead = greattail = (SListNode*)malloc(sizeof(SListNode));
//	lesshead = lesstail = (SListNode*)malloc(sizeof(SListNode));
//
//	if (plist == NULL)
//		return NULL;
//	SListNode* cur = plist;
//	while (cur != NULL)
//	{
//		if (cur->val > x)
//		{
//			greattail->next = cur;
//			greattail = greattail->next;
//		}
//		else
//		{
//			lesstail->next = cur;
//			lesstail = lesstail->next;
//		}
//		cur = cur->next;
//	}
//	greattail->next = NULL;
//	lesstail->next = greathead->next;
//	return lesshead->next;
//}
//SListNode* ContrastSort(SListNode* plist, int x)
//{
//	SListNode* newhead, * newtail;
//	newhead = newtail = (SListNode*)malloc(sizeof(SListNode*));
//
//	SListNode* cur = plist;
//	while (cur != NULL)
//	{
//		if (cur->val < x)
//		{
//			newtail->next = cur;
//			if(newtail->next != NULL)
//			newtail = newtail->next;
//		}
//		cur = cur->next;
//	}
//	cur = plist;
//	while (cur != NULL)
//	{
//		if (cur->val >= x)
//		{
//			if (newtail == newhead || newtail->next == NULL)
//			{
//				newtail->next = cur;
//				newtail = newtail->next;
//
//			}
//			else
//			{
//				newtail = cur;
//				newtail = newtail->next;
//			}
//		}
//		cur = cur->next;
//	}
//	//newtail->next = NULL;
//	return newhead->next;
//	
}