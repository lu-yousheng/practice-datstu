#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
void test()
{
	SLNode* plist = NULL;
	SLNodeAddEnd(&plist, 1);
	SLNodeAddEnd(&plist, 2);
	SLNodeAddEnd(&plist, 3);
	SLNodeAddFront(&plist, 0);
	//SLNodeDeletFron(&plist);
	SLNodeDeletEnd(&plist);
	SLNodeDeletEnd(&plist);
	SLNodePrint(plist);
}
void test2()
{
	SLNode* plist = NULL;
	SLNodeAddEnd(&plist, 1);
	SLNodeAddEnd(&plist, 2);
	SLNodeAddEnd(&plist, 3);
	SLNodePrint(plist);
	SLNodeDeletFind(&plist, 1);
	SLNodeAddFind(&plist, 3, 1);
	SLNodePrint(plist);

}
int main()
{
	test2();
	return 0;
}