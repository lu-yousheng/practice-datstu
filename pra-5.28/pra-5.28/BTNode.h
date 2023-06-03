#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int BTNodeType;
typedef struct BTNode
{
	BTNodeType val;
	struct BTNode* left;
	struct BTNode* right;
}BTNode;

BTNode* BuyNode(BTNodeType val);

//����--�������
void PreoBTNode(BTNode* root);

//����--�������
void InorBTNode(BTNode* root);

//����--�������
void PostBTNode(BTNode* root);

//�������
//void LevelOrder(BTNode* root);

// �������ڵ����
int BinaryTreeSize(BTNode* root);

// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root);

// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k);

// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTNodeType x);

// ����������
void BinaryTreeDestory(BTNode** root);

//�������ĸ߶�
int BTreeHeight(BTNode* root);

//�ж��Ƿ�Ϊ��ֵ������
bool JuageTree(BTNode* root);

//�ж��������Ƿ���ͬ
bool contrast(BTNode* root, BTNode* root1);