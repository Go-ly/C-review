#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
//int main() {
//	FILE* fp = fopen("e:/test.txt", "r");
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//	printf("打开文件成功\n");
//	char buffer[1024] = { 0 };
//	size_t count = fread(buffer, 1, 100, fp);
//	printf("%d\n", count);
//	printf("%s\n", buffer);
//	fclose(fp);
//	return 0;
//}

//int main() {
//	int count = 510;
//	while (count--) {
//		FILE* fp = fopen("e:/test.txt", "r");
//		if (fp == NULL) {
//			perror("fopen");
//			return 0;
//		}
//		printf("成功\n");
//	}
//	return 0;
//}

//int main() {
//	FILE* fp = fopen("e:/test.txt", "w");
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//	printf("文件打开成功\n");
//	return 0;
//}

//int main() {
//	FILE* fp = fopen("e:/test.txt", "r");
//	if (fp == NULL) {
//		perror("fopen");
//		return 0;
//	}
//	printf("文件打开成功\n");
//	int ret = 0;
//	fscanf(fp, "ret = %d", &ret);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	char ch[] = "ret = 2";
//	int ret = 0;
//	sscanf(ch, "ret = %d", &ret);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	char ch[50] = { 0 };
//	sprintf(ch, "ret = %d", 2);
//	printf("%s\n", ch);
//	return 0;
//}

//将字符串转化为整数

//int main() {
//	char ch[] = "11";
//	char ch2[] = "12";
//	int num1 = 0;
//	int num2 = 0;
//	sscanf(ch, "%d", &num1);
//	sscanf(ch2, "%d", &num2);
//	int ret = num1 + num2;
//	printf("%d\n", ret);
//	return 0;
//}

//将整数转换为字符串
//int main() {
//	char ch[50] = { 0 };
//	int ret = 10;
//	sprintf(ch, "%d", ret);
//	printf("%s\n", ch);
//	return 0;
//}

int main() {
	FILE* fp = fopen("e:/test.c", "w");
	return 0;
}