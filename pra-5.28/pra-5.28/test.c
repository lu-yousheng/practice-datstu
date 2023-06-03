#define _CRT_SECURE_NO_WARNINGS
#include"BTNode.h"

void test1()
{
	BTNode* n1 = BuyNode(1);
	BTNode* n2 = BuyNode(1);
	BTNode* n3 = BuyNode(1);
	BTNode* n4 = BuyNode(1);
	BTNode* n5 = BuyNode(1);
	BTNode* n6 = BuyNode(1);
	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;

	BTNode* n7 = BuyNode(1);
	BTNode* n8 = BuyNode(1);
	BTNode* n9 = BuyNode(2);
	BTNode* n10 = BuyNode(1);
	BTNode* n11= BuyNode(1);
	BTNode* n12 = BuyNode(1);
	n7->left = n8;
	n7->right = n10;
	n8->left = n9;
	n10->left = n11;
	n10->right = n12;
	////ÏÈÐò±éÀú
	//PreoBTNode(n1);
	//printf("\n");
	//InorBTNode(n1);
	//printf("\n");
	//PostBTNode(n1);
	//printf("%d ", BinaryTreeSize(n1));
	//printf("%d ", BinaryTreeLeafSize(n1));
	//printf("%d ", BinaryTreeLevelKSize(n1, 1));
	//if(BinaryTreeFind(n1, 6) != NULL)
	//	printf("%d ", BinaryTreeFind(n1, 6)->val);
	//printf("%d ", BTreeHeight(n1));
	//if (JuageTree(n1) == true)
	//	printf("true");
	//else
	//	printf("faulse");
	if (contrast(n1,n7) == true)
		printf("true");
	else
		printf("faulse");
}
int main()
{
	test1();
	return 0;
}