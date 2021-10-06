#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
//��̬��˳���
//#define N 10
//struct SeqList
//{
//	int arr[N];
//	int size;   //��Ч����
//};
//��ʵ��


//��̬��˳���
typedef int SeqDataType;
typedef struct SeqList
{
	SeqDataType* arr;    //ָ��̬���ٵ�����
	int size;    //��Ч���ݸ���
	int capacity;    //����
}SeqList;



void SeqListInit(SeqList* ps);
void SeqListDestroy(SeqList* ps);
void SeqListPushBack(SeqList* ps, SeqDataType x);    //β��
void SeqListPushFront(SeqList* ps, SeqDataType x);   //ͷ��
void SeqListPopBack(SeqList* ps);                    //βɾ
void SeqListPopFront(SeqList* ps);                   //ͷɾ
void SeqListShow(SeqList* ps);                       //չʾ