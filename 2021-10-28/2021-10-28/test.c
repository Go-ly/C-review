#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//size_t my_strlen(const char* arr) {
//	assert(arr != NULL);
//	int i = 0;
//	int len = 0;
//	while (arr[i] != '\0') {
//		i++;
//		len++;
//	}
//	return len;
//}
//int main() {
//	//模拟实现strlen
//	char arr[] = "abcdefgh";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//模拟实现strcpy

//char* my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(*src != '\0');
//	int i = 0;
//	while (src[i] != '\0') {
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = '\0';
//	return dest;
//}
//
//int main() {
//	char arr1[100] = "hello";
//	char arr2[100] = "abc";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现memmove

//void* memmove(void* dest, const void* src, size_t count);

//void* my_memmove(void* dest, const void* src, size_t count) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(count != 0);
//	char* pdest = (char*)dest;
//	char* psrc = (char*)src;
//	if (pdest > psrc && pdest < psrc + count)
//	{
//		// 内存重叠
//		while (count > 0) {
//			pdest[count] = psrc[count];
//			count--;
//		}
//	}
//	else {
//		// 未重叠
//		int i = 0;
//		while (count > 0) {
//			pdest[i] = psrc[i];
//			count--;
//			i++;
//		}
//	}
//	return dest;
//}
//
//int main() {
//	char arr[100] = "abc";
//	char arr2[100] = "hello";
//	my_memmove(arr, arr2, 6);
//	printf("%s\n", arr);
//	return 0;
//}


//模拟实现memcpy

//void* my_memcpy(void* dest, const void* src, size_t count) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(count != 0);
//	char* pdest = (char*)dest;
//	char* psrc = (char*)src;
//	int i = 0;
//	while (count > 0) {
//		pdest[i] = psrc[i];
//		count--;
//		i++;
//	}
//	return dest;
//}
//
//int main() {
//	char arr[100] = "abc";
//	char arr2[100] = "hello";
//	my_memcpy(arr, arr2, 6);
//	printf("%s\n", arr);
//	return 0;
//}
//


//模拟实现strstr

//const char* my_strstr(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	assert(*str1 != '\0');
//	assert(*str2 != '\0');
//	int i = 0; 
//	int j = 0;
//	while (str1[i] != '\0' || str2[j] != '\0') {
//		if (str1[i] == str2[j]) {
//			i++;
//			j++;
//		}
//		else {
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (str2[j] == '\0')
//	{
//		return &str1[i - j];
//	}
//	return NULL;
//}
//
//int main() {
//	char arr[] = "hello";
//	printf("%s\n", my_strstr(arr, "lo"));
//	return 0;
//}

//char* my_strcat(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ddest = dest;
//	while (*dest != '\0') {
//		dest++;
//	}
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	return ddest;
//}
//
//int main() {
//	char dest[100] = "abcde";
//	char src[100] = "hello";
//	printf("%s\n", my_strcat(dest, src));
//	return 0;
//}


//模拟实现strcmp
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0') {
//		if (*str1 > *str2) {
//			return 1;
//		}
//		else if (*str1 < *str2) {
//			return -1;
//		}
//		else {
//			str1++;
//			str2++;
//		}
//	}
//	if (*str1 > *str2) {
//		return 1;
//	} 
//	else if (*str1 < *str2) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	char ch[] = "abcdef";
//	char ch2[] = "abcdef";
//	printf("%d\n", my_strcmp(ch, ch2));
//	return 0;
//}

//模拟实现strncat

//char* my_strcat(char* dest, char* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	char* pdest = dest;
//	while (*dest != '\0') {
//		dest++;          // 找'\0'
//	}
//	for (size_t i = 0; i < num; i++) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return pdest;
//}


//模拟实现strncpy

char* my_strncpy(char* dest, const char* src, size_t num) {
	assert(dest != NULL);
	assert(src != NULL);
	assert(num != 0 && num <= strlen(src));
	//dest指向的空间要足够大
	for (size_t i = 0; i < num; i++) {
		dest[i] = src[i];
	}
	dest[num] = '\0';
	return dest;
}

int main() {
	char ch[20] = "abcde";
	char ch2[] = "hello";
	my_strncpy(ch, ch2, 3);
	printf("%s\n", ch);
}