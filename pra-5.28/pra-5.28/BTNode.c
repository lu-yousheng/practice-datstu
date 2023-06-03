#define _CRT_SECURE_NO_WARNINGS
#include"BTNode.h"

BTNode* BuyNode(BTNodeType val)
{
	BTNode* newdata = (BTNode*)malloc(sizeof(BTNode));
	if (newdata == NULL)
	{
		perror("malloc");
		return NULL;
	}
	newdata->left = NULL;
	newdata->right = NULL;
	newdata->val = val;
	return newdata;
}

void PreoBTNode(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->val);
	PreoBTNode(root->left);
	PreoBTNode(root->right);
}

void InorBTNode(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InorBTNode(root->left);
	printf("%d ", root->val);
	InorBTNode(root->right);
}


void PostBTNode(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostBTNode(root->left);
	PostBTNode(root->right);
	printf("%d ", root->val);
}

//void LevelOrder(BTNode* root)
//{
//	BTNode* cur = root;
//	printf("%d ", cur->val);
//	while (cur->left != NULL && cur->right != NULL)
//	{
//		printf("%d ", cur->left->val);
//		printf("%d ", cur->right->val);
//		cur = cur->left;
//	}
//}


int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return BinaryTreeLevelKSize(root->left, k - 1) + 
		BinaryTreeLevelKSize(root->right, k - 1);
}

BTNode* BinaryTreeFind(BTNode* root, BTNodeType x)
{
	if (root == NULL)
		return NULL;
	if (root->val == x)
	{
		return root;
	}
	return  BinaryTreeFind(root->left, x) != NULL? 
		BinaryTreeFind(root->left, x):
	BinaryTreeFind(root->right, x);
}

void BinaryTreeDestory(BTNode** root)
{
	assert(root);
	free(root);
	root = NULL;
}


int BTreeHeight(BTNode* root)
{
	//if (root == NULL)
	//	return 0;
	//return 1 + BTreeHeight(root->left) > 1 + BTreeHeight(root->right) 
	//	? 1 + BTreeHeight(root->left)
	//	: 1 + BTreeHeight(root->right);
	if (root == NULL)
	{
		return 0;
	}
	int lh = BTreeHeight(root->left) + 1;
	int hh = BTreeHeight(root->right) + 1;
	return lh > hh ? lh : hh;
}

bool JuageTree(BTNode* root)
{
	if (root==NULL)
		return true;
	if ( root->left && root->val != root->left->val)
	{
		return false;
	}
    if ( root->right&& root->val != root->right->val)
		return false;
	return JuageTree(root->left) == true ? JuageTree(root->right) : false;
}

bool contrast(BTNode* root, BTNode* root1)
{
	if (root == NULL)
		return true;
	if (root->val != root1->val)
		return false;
	return contrast(root->left, root1->left) == true ? contrast(root->right, root1->right) : false;
}