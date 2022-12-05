//BITCODE Ex096
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str1[100];
	char str2[100];
	printf("문장1 : ");
	gets_s(str1, sizeof(str1));
	printf("문장2 : ");
	gets_s(str2, sizeof(str2));
	//strcat(str1,str2);
	printf("해당 문장의 길이는 %d입니다.", strlen(str1) + strlen(str2));
	//printf("해당 문장의 길이는 %d입니다.", strlen(str1));
	
}