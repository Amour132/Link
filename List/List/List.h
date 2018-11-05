#pragma once

#include <stdio.h>
#include <assert.h>
#include <malloc.h>

typedef int LDateType;
typedef struct ListNode
{
	struct ListNode *next;
	struct ListNode *prve;
	LDateType date;
}ListNode;

typedef struct List
{
	ListNode *head;
}List;	

void ListInit(List *lt); //�����ʼ��
void ListDestory(List *lt); //����
void ListPushBack(List *lt,LDateType x);
void ListPopBack(List *lt);
void ListPushFront(List *lt,LDateType x);
void ListPopFront(List *lt);

ListNode *BuyListNode();
ListNode *ListFind(List *lt,LDateType x); //�Ҷ�Ӧ�ڵ�
void ListInsert(ListNode *pos,LDateType x); //����
void ListEarse(ListNode *pos); //ɾ��
int ListEmpty(List *lt);
int ListSize(List *lt);//��С
void ListPrint(List *lt);//��ӡ
void ListClear(List *ls);//��ճ�ͷ���������н��

