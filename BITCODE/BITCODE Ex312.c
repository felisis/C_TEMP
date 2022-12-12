//BITCODE Ex312
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

//char *strchr(char* str, char c) {
//	int sizestr = sizeof(str) / sizeof(str[0]);
//	int count = 0;
//	
//	for (int i = 0; i < sizestr; i++) {
//		if (str[i] == 'c') {
//			count++;
//			return str;
//		}
//		else if (str[i] == 'c') {
//			continue;
//		}
//	}
//	if (count == 0) {
//		return "NULL";
//	}
//	
//}

char* my_strchr(const char* str, int c) {
	while (*str != '\0') {
		if (*str == c) {
			return str;
		}
		str++;
	}
	return NULL;
}

int main(void) {
	char str[] = "abdefg";
	printf("%s",strchr(str, 'c'));

}