#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void SeqListInit(SeqList* ps)
{
	assert(ps != NULL);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SeqListDestroy(SeqList* ps)
{
	assert(ps != NULL);
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SeqListPushBack(SeqList* ps, SeqDataType x)
{
	assert(ps);
	if (ps->capacity == ps->size)      //Êý×éÂúÁË
	{
		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		SeqDataType* newArr = (SeqDataType*)realloc( ps->arr, sizeof(SeqDataType) * newcapacity);
		if (newArr == NULL)
		{
			perror("newArr - realloc");
			exit(-1);
		}
		ps->arr = newArr;
		newArr = NULL;
		ps->capacity = newcapacity;
	}
	ps->arr[ps->size] = x;
	ps->size++;
}

void SeqListShow(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}