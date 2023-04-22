#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Delete(int* arr, int numsize, int key)
//{
//	int fwd = 0;
//	int pos = 0;
//	while (fwd<numsize)
//	{
//		if (arr[fwd] != key)
//		{
//			arr[pos] = arr[fwd];
//			pos++;
//			fwd++;
//		}
//		else
//		{
//			fwd++;
//		}
//	}
//	return pos;
//}
//int main()
//{
//	int arr[] = { 1,2,2,5,6,2,5,2 };
//  //int arr[] = { 1,5,6,5,6,2,5,2 };
//	int sa = sizeof(arr) / sizeof(arr[0]);
//	int key = 2;
//	int newsa = Delete(arr, sa,key);
	//int i = 0;
	//for (i = 0;i < newsa;i++)
	//{
	//	printf("%d ", arr[i]);
	//}
//	printf("%d ", newsa);
//	return 0;
//}
#include<stdio.h>
void my_cat(int* arr1, int* arr2, int m, int n)
{
	int end = m + n-1;
	int end1 = m-1;
	int end2 = n-1;
	while (end1>=0 && end2>=0)
	{
		if (arr1[end1] > arr2[end2])
		{
			arr1[end] = arr1[end1];
			end--;
			end1--;
		}
		else
		{
			arr1[end] = arr2[end2];
			end--;
			end2--;
		}
	}
	while (end2>=0)
	{
		arr1[end] = arr2[end2];
		end--;
		end2--;
	}

}
int main()
{
	int arr1[8] = { 0,3,5 };
	int arr2[5] = { 1,2,5,7,9 };
	int m = 3;
	int n = sizeof(arr2) / sizeof(arr2[0]);
	my_cat(arr1, arr2, m, n);
	int i = 0;
	for (i = 0;i < 8;i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}