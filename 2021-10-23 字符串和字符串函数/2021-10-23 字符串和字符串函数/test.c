#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//ʵ��strlen����
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
////ʵ��strcpy����
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

//����Ļ�ϴ�ӡ������ǡ�

//��һ��

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

//����
//int main()
//{
//	int arr[30] = {1};
//
//	return 0;
//}




//����
//�����˿ռ临�Ӷ�   N^2 ==> N
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


//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//int main()
//{
//	for (int peo = 'A'; peo < 'D'; peo++)
//	{
//		if (((peo != 'A') + (peo == 'C') + (peo == 'D') + (peo != 'D')) == 3)
//		{
//			printf("������%c\n", peo);
//		}
//	}
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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