#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
SLNode* need_malloc(SLNode** newdata, typeNode x)
{
	*newdata = (SLNode*)malloc(sizeof(SLNode));
	if (*newdata != NULL)
	{
		(*newdata)->val = x;
		(*newdata)->next = NULL;
	}
	else
	{
		perror("malloc");
		exit(-1);
	}
	return *newdata;
}
void SLNodePrint(SLNode* plist)
{
	SLNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->val);
		cur = cur->next;

	}
	printf("\n");
}

void SLNodeAddEnd(SLNode** pphead, typeNode x)
{
	SLNode* newdata = NULL;
	newdata = need_malloc(&newdata, x);
	if (*pphead == NULL)
	{
		*pphead = newdata;
	}
	else
	{
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newdata;
	}
}

void SLNodeAddFront(SLNode** pplist, typeNode x)
{
	SLNode* newdata = NULL;
	newdata = need_malloc(&newdata, x);
	newdata->next = *pplist;
	*pplist = newdata;
}
void SLNodeDeletEnd(SLNode** pplist)
{
	SLNode* tail = *pplist;
	SLNode* cur = *pplist;
	while (tail->next != NULL)
	{
		tail = tail->next;
		if (tail->next != NULL)
		{
			cur = tail;
		}
	}
	free(tail);
	cur->next = NULL;

	
}
void SLNodeDeletFron(SLNode** pplist)
{
	SLNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}

SLNode* Findval(SLNode** pos,typeNode x)
{
	while (*pos != NULL)
	{
		if ((*pos)->val == x)
		{
			return *pos;
		}
		*pos = (*pos)->next;
	}
	return NULL;
}

void SLNodeDeletFind(SLNode** pplist, typeNode x)
{
	SLNode* pos = *pplist;
	SLNode* cur = *pplist;
	pos = Findval(&pos, x);

	if (pos)
	{
		if (pplist == NULL)
		{
			return;
		}
		else if (pos == *pplist)
		{
			SLNode* next = (*pplist)->next;
			free(*pplist);
			*pplist = next;
		}
		else
		{
			while (cur->next != pos)
			{
				cur = cur->next;
			}
			cur->next = pos->next;
			free(pos);
			pos = NULL;
		}
	}
}

void SLNodeAddFind(SLNode** pplist, typeNode x, typeNode y)
{
	SLNode* pos = *pplist;
	SLNode* cur = *pplist;
	pos = Findval(&pos, x);
	if (pos)
	{
		SLNode* newdata = NULL;
		newdata = need_malloc(&newdata, y);
		if (pos == *pplist)
		{
			newdata->next = *pplist;
			*pplist = newdata;
		}
		else
		{
			while (cur->next != pos)
			{
				cur = cur->next;
			}
			cur->next = newdata;
			newdata->next = pos;
		}
	}

}