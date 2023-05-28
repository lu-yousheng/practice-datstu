#define _CRT_SECURE_NO_WARNINGS
#include"BinaryTree.h"
void test()
{
	BinaryTree bt;
	InitBTree(&bt);
	int arr[] = { 2,5,1,6,8,1,5,7,1,8,9,10};
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
//void test1()
//{
//	BinaryTree bt;
//	InitBTree(&bt);
//	int arr[] = { 2,5,1,6,8,1,5,7,1,8,9,10 };
//	HeapCreate(&bt, arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0;i < bt.size;i++)
//	{
//		printf("%d ", bt.arry[i]);
//	}
//	printf("\n");
//	//HeapSort(&bt);
//	PrintTopK(arr, sizeof(arr) / sizeof(arr[0]),3);
//	for (int i = 0;i < bt.size;i++)
//	{
//		printf("%d ", bt.arry[i]);
//	}
//
//	DestoryTree(&bt);
//
//}
void PrintTopK(int* a, int n, int k)
{
	// 1. 建堆--用a中前k个元素建堆
	AdjustDown(a, k-1, 0);
	int mtain = k - 1;
	// 2. 将剩余n-k个元素依次与堆顶元素交换，不满则则替换
	while (k < n)
	{
		if (a[0] > a[k])
		{
			Swap(&a[0], &a[k]);
			AdjustDown(a, mtain, 0);
		}
		k++;
	}
}

void test2()
{
	int data = 1000;
	srand((unsigned)time(0));
	int arr[] = { 2,5,1,6,8,1,5,7,1,8,9,10 };
	//FILE* indata = fopen("data.txt","a");
	//if (indata == NULL)
	//{
	//	perror("fopen");
	//	return;
	//}
	//for (int i = 0;i < data;i++)
	//{
	//	int val = rand()%1000;
	//	fprintf(indata,"%d ", val);
	//}
	//fclose(indata);
	FILE* outdata = fopen("data.txt", "r");
	//PrintTopK(arr, sizeof(arr) / sizeof(arr[0]), 5);
	//for (int i = 0;i < 5;i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	int k = 0;
	int val = 0;
	int arr1[5] = { 0 };
	while (fscanf(outdata, "%d", &val) != EOF)
	{
		if (k < 5)
		{
			arr1[k] = val;
			k++;
		}
		else if (k==5)
		{
			AdjustDown(arr1, 4, 0);
		}
		else
		{
			if (arr1[0] > val)
			{
				Swap(&arr1[0],&val);
				AdjustDown(arr1, 4, 0);
			}
		}
	}
	for (int i = 0; i < 5;i++)
	{
		printf("%d ", arr1[i]);
	}
	fclose(outdata);

}
int main()
{
	//test();
	//test1();
	test2();
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