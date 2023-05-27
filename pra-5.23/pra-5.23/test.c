#define _CRT_SECURE_NO_WARNINGS
#include"BinaryTree.h"
void test()
{
	BinaryTree bt;
	InitBTree(&bt);
	int arr[] = { 2,5,1,6,8,1,5,7,1,8,9,10,3,4 };
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		BTreePush(&bt, arr[i]);
	}
	for (int i = 0;i < bt.size;i++)
	{
		printf("%d ",bt.arry[i]);
	}
	int size = bt.size;
	printf("\n");
	for (int i = 0;i < size;i++)
	{
		printf("%d ", BTreeTop(&bt));
		BTreePop(&bt);

	}

	DestoryTree(&bt);
}
int main()
{
	test();
	return 0;
}
//int TreeHeight(BTNode* root)
//{
//	if (root->left == NULL && root->right == NULL)
//	{
//		return 0;
//	}
//	return TreeHeight(root->left) + TreeHeight(root->right);
//}