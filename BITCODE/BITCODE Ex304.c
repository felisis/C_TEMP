//BITCODE Ex304
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int vet(int* a, int* b, int a1, int b1) {
	int vec_ab = 0;
	for (int i = 0; i < a1; i++) {
		vec_ab += a[i] * b[i];
	}
	return vec_ab;
}

int main(void) {
	int a[3];
	int b[3];
	printf(">>");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	printf(">>");
	scanf("%d %d %d", &b[0], &b[1], &b[2]);
	int len_a = sizeof(a) / sizeof(a[0]);
	int len_b = sizeof(b) / sizeof(b[0]);
	printf("vt : %d",vet(a, b, len_a, len_b));
}