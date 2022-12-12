//BITCODE Ex205
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

bool function(int n) {
	bool is_include = true;
	for (int i = 1; i <= 5; i++) {
		bool is_i = false;
		int num = n;
		while (num > 0) {
			if (num % 10 == i) {
				is_i = true;
				break;
			}
			num /= 10;
		}
		if (!is_i) {
			is_include = false;
			break;
		}
	}
	return is_include;
}
int main(void) {
	long n;
	printf("num >>");
	scanf("%d", &n);
	printf(function(n) ? "true" : "False");
}