//BITCODE Ex238
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int i;
RE:
	scanf("%d", &i);
	if (i < 10 | i>99) {
		printf("10~99 입력");
		goto RE;
	}
	else {
		int a = i / 10;
		int b = i % 10;
		bool a1 = false;
		if (a == b) {
			printf("true");
			
		}
		else {
			printf("false");
			return a1;
		}
	}
}