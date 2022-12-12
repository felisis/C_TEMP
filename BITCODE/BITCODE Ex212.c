//BITCODE Ex212
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

char* strcat(char *str1, char *str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = len1; i < len1 + len2; i++) {
		str1[i] = str2[i - len1];
	}
	return str1;
}

int main(void) {
	char str1[100]="";
	char str2[100]="";
	printf("문자열 >> ");
	gets(str1);
	gets(str2);
	strcat(str1, str2);
	printf("%s", str1);

}