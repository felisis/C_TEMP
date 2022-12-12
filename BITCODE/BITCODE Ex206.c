//BITCODE Ex206
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int function(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		int num = i;
		while (num > 0) {
			if (num % 10 == 1) count++;
			num /= 10;
		}
	}
	printf("count >> %d", count);
}
int main(void) {
	int n;
	printf("num >> ");
	scanf("%d", &n);
	function(n);
}