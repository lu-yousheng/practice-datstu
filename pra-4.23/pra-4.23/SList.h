#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int typeNode;
typedef struct SlistNode
{
	typeNode val;
	struct SLNode* next;

}SLNode;
//Œ≤≤Â°Ã
void SLNodeAddEnd(SLNode** pplist, typeNode x);

//Õ∑≤Â°Ã
void SLNodeAddFront(SLNode** pplist, typeNode x);

//Œ≤…æ°Ã
void SLNodeDeletEnd(SLNode** pplist);

//Õ∑…æ°Ã
void SLNodeDeletFron(SLNode** pplist);

//≤È’“…æ°Ã
void SLNodeDeletFind(SLNode** pplist,typeNode x);

//≤È’“º”°Ã
void SLNodeAddFind(SLNode** pplist, typeNode x, typeNode y);

//≤È’“°Ã
SLNode* Findval(SLNode** pos,typeNode x);

//¥Ú”°°Ã
void SLNodePrint(SLNode* plist);