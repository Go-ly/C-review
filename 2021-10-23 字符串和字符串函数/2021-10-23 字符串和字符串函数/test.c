#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//实现strlen函数
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t len = 0;
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		len++;
//		i++;
//	}
//	return len;
//}
//
////实现strcpy函数
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		des[i] = src[i];
//		i++;
//	}
//	des[i] = '\0';
//	return des;
//}
//int main()
//{
//
//	return 0;
//}

//在屏幕上打印杨辉三角。

//法一：

//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i][i] = 1;
//		arr[i][0] = 1;
//	}
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int t = 0; t <= 10 - i; t++)
//		{
//			printf("  ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//法二
//int main()
//{
//	int arr[30] = {1};
//
//	return 0;
//}




//法二
//降低了空间复杂度   N^2 ==> N
//int main()
//{
//	int arr[30] = { 1 };
//	int n = 10;
//	printf("1\n");
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			arr[j] = arr[j] + arr[j - 1];
//		}
//		for (int t = 0; t <= i; t++)
//		{
//			printf("%d ", arr[t]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//
//A说：不是我。
//
//B说：是C。
//
//C说：是D。
//
//D说：C在胡说
//
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	for (int peo = 'A'; peo < 'D'; peo++)
//	{
//		if (((peo != 'A') + (peo == 'C') + (peo == 'D') + (peo != 'D')) == 3)
//		{
//			printf("凶手是%c\n", peo);
//		}
//	}
//	return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (A * B * C * D * E == 120)
						{
							if (((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1) + (D == 2) == 1) && ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) ==1))
							{
								printf("A == %d\n", A);
								printf("B == %d\n", B);
								printf("C == %d\n", C);
								printf("D == %d\n", D);
								printf("E == %d\n", E);

							}
						}
					}
				}
			}
		}
	}
	return 0;
}