//BITCODE Ex271
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void){
	int N, num, count = -1;
	printf("자연수 입력>> ");
	scanf("%d", &N);
	num = N;
	printf("소인수 분해>> ");
	for (int i = 2; i <= N; i++) {
	P:
		if (num % i == 0) {
			printf("%d ", i);
			num = num / i;
			count++;
			goto P;
		}
	}
	if (count > 0) printf("\n>>%d는 소수x", N);
	else printf("\n%d는 소수", N);
}