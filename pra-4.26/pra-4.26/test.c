#define _CRT_SECURE_NO_WARNINGS
#include"DList.h"
void test1()
{
	DListNode* plist = NULL;
	InitDListNode(plist);
	AddFrontDLNode(plist,1);

	Destroy(plist);
}
int main()
{
	test1();
	return 0;
}