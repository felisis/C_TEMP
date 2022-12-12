//BITCODE Ex202
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int main(void) {
	int num;
	printf("초 입력 >> ");
	scanf("%d", &num);
	int hour = num / 3600;
	int min = (num % 3600) / 60;
	int sec = (num % 3600) % 60;
	printf("%d시 %d분 %d초", hour, min, sec);
}