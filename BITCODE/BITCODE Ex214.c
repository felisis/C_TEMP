//BITCODE Ex214
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void change_second(int total_sec, int* hour, int* min, int* sec) {
	printf("%d시 %d분 %d초\n", hour, min, sec);
}


int main(void) {
	int v,hour,min,sec;
	printf("초 입력 >> ");
	scanf("%d", &v);
	hour = v / 3600;
	min = (v % 3600) / 60;
	sec = (v % 3600) % 60;
	change_second(v,hour,min,sec);
}