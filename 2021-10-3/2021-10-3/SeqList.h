#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
//静态的顺序表
//#define N 10
//struct SeqList
//{
//	int arr[N];
//	int size;   //有效数据
//};
//不实用


//动态的顺序表
typedef int SeqDataType;
typedef struct SeqList
{
	SeqDataType* arr;    //指向动态开辟的数组
	int size;    //有效数据个数
	int capacity;    //容量
}SeqList;



void SeqListInit(SeqList* ps);
void SeqListDestroy(SeqList* ps);
void SeqListPushBack(SeqList* ps, SeqDataType x);    //尾插
void SeqListPushFront(SeqList* ps, SeqDataType x);   //头插
void SeqListPopBack(SeqList* ps);                    //尾删
void SeqListPopFront(SeqList* ps);                   //头删
void SeqListShow(SeqList* ps);                       //展示