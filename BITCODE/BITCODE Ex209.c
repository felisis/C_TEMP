//BITCODE Ex209
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int strlen(char* str) {
	int len = 0;
	while (str[len]) len++;
	return len;

}

int main(void) {
	int b;
	char str[100] = "abcdef ghijk";
	b = strlen(str);
	printf("%d", b);
}