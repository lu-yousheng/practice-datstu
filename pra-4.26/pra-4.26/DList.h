#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int TypeNode;
typedef struct DListNode
{
	TypeNode val;
	struct DListNode* pre;
	struct DListNode* tail;
}DListNode;

void InitDListNode(DListNode* plist);
void Destroy(DListNode* plist);
void AddFrontDLNode(DListNode* plist, TypeNode x);
