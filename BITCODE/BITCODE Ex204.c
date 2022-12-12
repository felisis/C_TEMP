//BITCODE Ex204
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void function(int n){
	int sum = n, num = n;
	while (true) {
		if (sum < 10) break;
		num = sum; sum = 0;
		while (num >= 1) {
			int m = num % 10; num = num / 10;
			sum += m;
			printf("+ %d ", m);
		}
		printf("= %d\n", sum);
	}
}
int main(void) {
	int n;
	printf("num >>");
	scanf("%d", &n);
	function(n);
}