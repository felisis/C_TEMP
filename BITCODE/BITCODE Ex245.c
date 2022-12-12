//BITCODE Ex245
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void){
	int i,num, count=0;
	printf("Num >> ");
	scanf("%d", &num);
	while (num > 0) {
		if ((num % 10) % 3 == 0) count++;
		num /= 10;
	}
	for (i = 0; i < count; i++) {
		printf("짝");
	}
	/*if (count == 1) {
		printf("짞");
	}
	else {
		printf("홀");
	}*/
}
