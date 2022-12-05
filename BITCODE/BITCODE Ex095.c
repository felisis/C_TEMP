//BITCODE Ex095
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char std[100];
	printf("문장을 입력하세요 : ");
	gets_s(std, sizeof(std));
	printf("해당 문장의 길이는 %d입니다.", strlen(std));
}