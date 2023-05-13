#define _CRT_SECURE_NO_WARNINGS
#include"DList.h"
void Test1()
{
	DListNode* plist = NULL;
	plist = InitNode(plist);
	//PopHeadDLNode(plist, 1);
	//PopHeadDLNode(plist, 2);
	//PopHeadDLNode(plist, 3);
	//PopHeadDLNode(plist, 4);
	//DLNodePrint(plist);

	PopTailDLNode(plist, 1);
	PopTailDLNode(plist, 2);
	PopTailDLNode(plist, 3);
	PopTailDLNode(plist, 4);
	//PushHeadDLNode(plist);
	//PushHeadDLNode(plist);
	//PushHeadDLNode(plist);
	//PushHeadDLNode(plist);
	//PushHeadDLNode(plist);
	//PushTailDLNode(plist);
	//PushTailDLNode(plist);
	//PushTailDLNode(plist);
	//PushTailDLNode(plist);
	DLNodePrint(plist);

}
void Test2()
{
	DListNode* plist = NULL;
	plist = InitNode(plist);
	PopTailDLNode(plist, 1);
	PopTailDLNode(plist, 2);
	PopTailDLNode(plist, 3);
	PopTailDLNode(plist, 4);

}
int main()
{
	Test1();
	return 0;
}