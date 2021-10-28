#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <stdio.h>
#include <string.h>
//char* myStrcat(char* dest, const char* src) {
//	// destÒª×ã¹»´ó
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	while (dest[i] != '\0') {
//		i++;
//	}
//	int j = 0;
//	while (src[j] != '\0') {
//		dest[i] = src[j];
//		i++;
//		j++;
//	}
//	dest[i] = '\0';
//	return dest;
//}
//
//int main() {
//	char arr1[100] = "abcd";
//	char arr2[100] = "efg";
//	myStrcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

// strcmp   ×Ö·û´®±È½Ï

//int myStrcmp(const char* str1, const char* str2) {
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
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	printf("%d\n", myStrcmp(arr1, arr2));
//	return 0;
//}

// strncpy
// strncat
// strncmp

//strstr   ÔÚ×Ö·û´®ÖÐ²éÕÒ×Ö·û´®

//const char* myStrstr(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	assert(*str1 != '\0');
//	assert(*str2 != '\0');
//	int i = 0;
//	int j = 0;
//	while (str2[j] != '\0' && str1[i] != '\0') {
//		if (str1[i] == str2[j]) {
//			i++;
//			j++;
//		}
//		else {
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (str2[j] == '\0') {
//		return &str1[i - j];
//	}
//	return (char*)0;
//}
//
//int main() {
//	char arr1[] = "abcdefg";
//	char arr2[] = "de";
//	printf("%s\n", myStrstr(arr1, arr2));
//	return 0;
//}

// strtok ×Ö·û´®ÇÐ·Ö

//int main() {
//	char arr[] = "This is a book";
//	char* ptr = strtok(arr, " ");
//	while (ptr != NULL) {
//		printf("%s\n", ptr);
//		ptr = strtok(NULL, " ");
//	}
//	return 0;
//}

// memoryÏµÁÐº¯Êý

//memcpy
void* myMemcpy(void* dest, const void* src, size_t num) {
	assert(dest != NULL);
	assert(src != NULL);
	assert(num != 0);
	char* pdest = (char*)dest;
	char* psrc = (char*)src;
	for (size_t i = 0; i < num; i++) {
		pdest[i] = psrc[i];
	}
	return dest;
}
int main() {
	char arr1[10] = "abcdefg";
	char arr2[10] = "de";
	myMemcpy(arr1, arr2, sizeof(arr2));
	printf("%s\n", arr1);
	return 0;
}
