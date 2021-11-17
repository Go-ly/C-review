#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#if 0
typedef struct SString
{
	char ch[20];
	int len;
}SString;
int Index_BF(SString* ps, SString* pt)
{
	int i = 0; 
	int j = 0;
	while (i <= ps->len - 1 && j <= pt->len - 1)
	{
		if (ps->ch[i] == pt->ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= pt->len - 1)
	{
		return i - pt->len;
	}
	return 0;   
}

int main()
{
	SString s = { "aaababcd", strlen("aaababcd") };
	SString t = { "cd", strlen("cd") };
	int pos = Index_BF(&s, &t);
	printf("%d\n", pos);
	return 0;
}
#endif

void GetNext(char* sub, int* next) {
	assert(sub != NULL);
	assert(next != NULL);
	next[0] = -1;
	next[1] = 0;
	int k = 0;    
	int i = 2;
	int lenSub = strlen(sub);
	while (i < lenSub) {
		if (k == -1 || sub[i - 1] == sub[k]) {
			next[i] = k + 1;
			k++;
			i++;
		}
		else {
			k = next[k];
		}
	}
}
int KMP(char* str, char* sub, int pos) {
	assert(str != NULL);
	assert(sub != NULL);
	int lenStr = strlen(str);
	int lenSub = strlen(sub);
	if (lenStr == 0 || lenSub == 0) {
		return -1;
	}
	if (pos < 0 || pos >= lenStr) {
		return -1;
	}
	int* next = (int*)malloc(sizeof(int) * lenSub);
	if (next == NULL) {
		perror("malloc");
		exit(-1);
	}
	GetNext(sub, next);
	int i = pos;    //遍历主串
	int j = 0;    //遍历子串
	while (i < lenStr && j < lenSub) {
		if (j == -1 || str[i] == sub[j]) {
			i++;
			j++;
		}
		else {
			j = next[j];
		}
	}
	if (j >= lenSub) {
		return i - j;
	}
	return -1;
}

int main() {
	char arr[] = "abcdef";
	char arr1[] = "defg";
	printf("%d\n", KMP(arr, arr1, 0));
	return 0;
}