//BITCODE Ex196
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int func(int n) {
	int sum = 0;
	for (int i = 1; i <= n - 1; i++) {
		int a = i % 5;
		sum += a;
	}
	printf("sum >> %d", sum);
}
int main(void) {
	int num;
	printf("fun(n) >> ");
	scanf("%d", &num);
	func(num);
}