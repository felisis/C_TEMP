//BITCODE Ex056
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char* A = "ABC";
	char* B = "abc";
	char* C = "ACb";
	char* D = "bac";
	printf("%d %d\n", A, B);
	printf("%d %d\n", C, D);
	printf("%d\n", strcmp(A, B));//-1
	printf("%d\n", strcmp(A, C));//-1
	printf("%d\n", strncmp(A, C, 1));//0
	printf("%d\n", _stricmp(C, D));//-1
	printf("%d\n", _stricmp(A, B));//0
}