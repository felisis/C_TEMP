//BITCODE Ex108
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int A, B;
	printf("두 자연수 A와 B의 값을 각각 입력하시오 : ");
	scanf("%d %d", &A, &B);
	printf("A+B=%d\n", A + B);
	printf("A-B=%d\n", A - B);
	printf("A*B=%d\n", A * B);
	printf("A를 B로 나눈 몫=%d\n", A / B);
	printf("A % B = % d\n", A % B);

}