#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"
int main()
{
	SListNode* plist = CreatNode(5);
	SLNodePrint(plist);

	plist = ContrastSort(plist, 3);
	SLNodePrint(plist);
	free(plist);
	plist = NULL;
	return 0;
}