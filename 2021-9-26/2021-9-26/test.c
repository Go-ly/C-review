#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5;
//	char ch = 'b';
//	int arr[20] = { 0 };
//}
//size_t

int main()
{
	int* ps = (int*)calloc(10,sizeof(int));
	if (ps == NULL)
	{
		perror("malloc:");
		return 0;
	}
	//调整大小
	int* ptr = (int*)realloc(ps, 20 * sizeof(int));
	if (ptr == NULL)
	{
		perror("realloc");
	}
	else
	{
		ps = ptr;
		ptr = NULL;
	}
	for (int i = 10; i < 20; i++)
	{
		*(ps + i) = i;
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", *(ps + i));
	}
	return 0;
}

