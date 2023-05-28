#define _CRT_SECURE_NO_WARNINGS
#include"BinaryTree.h"

void InitBTree(BinaryTree* pbt)
{
	assert(pbt);
	pbt->arry = NULL;
	pbt->capacity = 0;
	pbt->size = 0;
}

void DestoryTree(BinaryTree* pbt)
{
	assert(pbt);
	free(pbt->arry);
	pbt->arry = NULL;
}

void Swap(TreeType* a, TreeType* b)
{
	TreeType tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//向下调整
//void AdjustDown()
//{
//
//}
//
//向上调整
void AdjustUp(TreeType* arry,int index)
{
	int parent = (index - 1) / 2;
	int child = index;
	//当孩子小于父亲时结束，大于就交换位置
	//该循环判断不可有等于，否则将造成死循环
	while (arry[child] > arry[parent])
	{
		Swap(&arry[child], &arry[parent]);
		child = parent;
		parent = (child - 1) / 2;
	}
}

void BTreePush(BinaryTree* pbt, TreeType val)
{
	//扩容
	if (pbt->capacity == pbt->size)
	{
		int newcapacity = pbt->capacity == 0 ? 4 : pbt->capacity + 2;
		TreeType* tmp = (TreeType*)realloc(pbt->arry, sizeof(TreeType) * newcapacity);
		if (tmp == NULL)
		{
			perror("BTreePush realloc");
			exit(-1);
		}
		pbt->arry = tmp;
		pbt->capacity = newcapacity;
	}
	pbt->arry[pbt->size] = val;
	pbt->size++;
	AdjustUp(pbt->arry,pbt->size-1);
}

void AdjustDown(TreeType* arry,int size,int begin)
{
	int parent = begin;
	int child = parent * 2 + 1;
	//循环中改变大于小于则是改变大小堆的改变
	while (child <=size )
	{
		if ((arry[child] < arry[child + 1]) && child+1<=size)
			child++;
		if (arry[parent] < arry[child])
		{
			Swap(&arry[parent], &arry[child]);
		}
		parent = child;
		child = parent * 2 + 1;
	}
	

}
void BTreePop(BinaryTree* pbt)
{
	assert(pbt);
	Swap(&pbt->arry[pbt->size - 1], &pbt->arry[0]);
	pbt->size--;
	AdjustDown(pbt->arry,pbt->size-1,0);
}
TreeType BTreeTop(BinaryTree* pbt)
{
	assert(pbt);
	return pbt->arry[0];
}

void HeapCreate(BinaryTree* pbt, TreeType* a, int n)
{

	assert(pbt);
	//将数组a中的数据复制到堆pbt上
	pbt->arry = (TreeType*)malloc(sizeof(TreeType) * n);
	if (pbt->arry == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	memcpy(pbt->arry, a, sizeof(TreeType) * n);
	pbt->capacity = pbt->size = n;
	
	//建堆算法
	int parents = (n - 1 - 1) / 2;
	for (int i = 0;i <= (n - 1 - 1) / 2;i++)
	{
		AdjustDown(pbt->arry, pbt->size - 1, parents);
		parents--;
	}

}

void HeapSort(BinaryTree* pbt)
{
	assert(pbt);
	int newsize = pbt->size;
	while (newsize!=0)
	{
		Swap(&pbt->arry[0], &pbt->arry[newsize - 1]);
		newsize--;
		AdjustDown(pbt->arry, newsize - 1, 0);
	}
}