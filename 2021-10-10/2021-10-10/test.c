#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//void get_prime_number(int x, int y)
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for ( ;j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	get_prime_number(100, 200);
//	return 0;
//}

//�ж�����
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0)
//	{
//		return 1;      //������
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n", is_leap_year(2021));
//	return 0;
//}

//����������������
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	swap(&x, &y);
//	printf("x == %d\n", x);
//	printf("y == %d\n", y);
//	return 0;
//}

//�ú���ʵ�ֳ˷��ھ���Ĵ�ӡ

//void print_mul_tab(int num)
//{
//	for (int i = 1; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	print_mul_tab(12);
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ������ÿһλ
//void print_num(int num)
//{
//	
//	if (num / 10 != 0)
//	{
//		print_num(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main()
//{
//	
//	print_num(12345);
//	return 0;
//}

//��׳�
//1.�ǵݹ�
//int fac(int num)
//{
//	if (num <= 0)
//	{
//		return 1;
//	}
//	int fac = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		fac = fac * i;
//	}
//	return fac;
//}
//
////2.�ݹ�
//int rec_fac(int num)
//{
//	if (num <= 1)
//	{
//		return 1;
//	}
//	return num * rec_fac(num - 1);
//}
//int main()
//{
//	printf("%d\n", fac(5));
//	printf("%d\n", rec_fac(4));
//	return 0;
//}


//strlen������ģ��ʵ��
//1.�ǵݹ�
//int get_len(char* str)
//{
//	assert(str);
//	int len = 0;
//	while (1)
//	{
//		if (*str != '\0')
//		{
//			len++;
//			str++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return len;
//}
//
////2.�ݹ�
//int rec_get_len(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//	{
//		return 1 + rec_get_len(++str);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n", get_len("abcdef"));
//	printf("%d\n", rec_get_len("hello000"));
//	return 0;
//
//}



//�ַ������򣨵ݹ�ʵ�֣�
//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//
//����֮����������ݱ�ɣ�fedcba

//void reverse_string(char* string)
//{
//	if (*string == '\0')
//	{
//		return;
//	}
//	int len = strlen(string);
//	int temp = *(string);
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	reverse_string(string + 1);
//	*(string + len - 1) = temp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		int bit = n % 10;
//		return bit + DigitSum(n / 10);
//	}
//	return n;
//}
//
//int main()
//{
//	printf("%d\n", DigitSum(1729));
//}



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

//int get_pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n * get_pow(n, k - 1);
//}
//int main()
//{
//	printf("%d^%d == %d\n", 2, 5, get_pow(2, 5));
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//1.�ݹ�

//int rec_fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return rec_fib(n - 1) + rec_fib(n - 2);
//}
//
////2.�ǵݹ�
//int fib(int n)
//{
//	int fib = 1;
//	int prev = 1;
//	for(int i = 1; i < n - 1; i++)
//	{
//		int temp = fib;
//		fib = fib + prev;
//		prev = temp;
//	}
//	return fib;
//}
//int main()
//{
//	printf("��10��쳲���������>%d\n", rec_fib(10));
//	printf("��10��쳲���������>%d\n", fib(10));
//	return 0;
//}

//�������������ð������
//void bubble_sort(int* arr, int size)
//{
//	for (int num = 0; num < size - 1; num++)
//	{
//		int isswap = 0;
//		for (int com = 0; com < size - num - 1; com++)
//		{
//			if (arr[com] > arr[com + 1])
//			{
//				int temp = arr[com];
//				arr[com] = arr[com + 1];
//				arr[com + 1] = temp;
//				isswap = 1;
//			}
//		}
//		if (isswap == 0)
//		{
//			return;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,5,6,4,1,3,2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*����һ���������飬��ɶ�����Ĳ���
ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��*/
//void init(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void assignment(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void reverse(int* arr, int size)
//{
//	while (size >= 2)
//	{
//		int tmp = *arr;
//		*arr = *(arr + size - 1);
//		*(arr + size - 1) = tmp;
//		arr++;
//		size = size - 2;
//	}
//
//}
//int main()
//{
//	int arr[5];
//	int size = sizeof(arr) / sizeof(arr[0]);	
//	init(arr, size);
//
//	assignment(arr, size);	
//	print(arr, size);
//	reverse(arr, size);
//	print(arr, size);
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void swap_arr(int* arr1, int* arr2, int size)
//{
//	while(size)
//	{
//		int tmp = *arr1;
//		*arr1 = *arr2;
//		*arr2 = tmp;
//		arr1++;
//		arr2++;
//		size--;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	swap_arr(arr1, arr2, size);
//	return 0;
//}