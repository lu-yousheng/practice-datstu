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
//���µ���
//void AdjustDown()
//{
//
//}
//
//���ϵ���
void AdjustUp(TreeType* arry,int index)
{
	int parent = (index - 1) / 2;
	int child = index;
	//������С�ڸ���ʱ���������ھͽ���λ��
	//��ѭ���жϲ����е��ڣ����������ѭ��
	while (arry[child] > arry[parent])
	{
		Swap(&arry[child], &arry[parent]);
		child = parent;
		parent = (child - 1) / 2;
	}
}

void BTreePush(BinaryTree* pbt, TreeType val)
{
	//����
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

void AdjustDown(TreeType* arry,int size)
{
	int parent = 0;
	int child = parent * 2 + 1;
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
	AdjustDown(pbt->arry,pbt->size-1);
}
TreeType BTreeTop(BinaryTree* pbt)
{
	assert(pbt);
	return pbt->arry[0];
}