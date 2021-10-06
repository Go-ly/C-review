#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void SeqListTest1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 9);
	SeqListPushBack(&s, 11);
	SeqListPushBack(&s, 13);
	SeqListPushBack(&s, 15);
	SeqListPushBack(&s, 18);

	SeqListShow(&s);
	SeqListDestroy(&s);
}
int main()
{
	SeqListTest1();
	return 0;
}