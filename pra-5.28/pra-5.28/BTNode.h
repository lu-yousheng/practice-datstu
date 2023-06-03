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

//遍历--先序遍历
void PreoBTNode(BTNode* root);

//遍历--中序遍历
void InorBTNode(BTNode* root);

//遍历--后序遍历
void PostBTNode(BTNode* root);

//层序遍历
//void LevelOrder(BTNode* root);

// 二叉树节点个数
int BinaryTreeSize(BTNode* root);

// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root);

// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTNodeType x);

// 二叉树销毁
void BinaryTreeDestory(BTNode** root);

//二叉树的高度
int BTreeHeight(BTNode* root);

//判断是否为单值二叉树
bool JuageTree(BTNode* root);

//判断两个树是否相同
bool contrast(BTNode* root, BTNode* root1);