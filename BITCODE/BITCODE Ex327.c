//BITCODE Ex327
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int pr_array(int* arr, int len) {
	printf("[");
	for (int i = 0; i < len - 1; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d]", arr[len - 1]);
}

int main(void) {
	int arr[10];
	printf(">> ");
	scanf("%d %d", arr, arr + 1);
	for (int i = 0; i < 8; i++) {
		arr[i + 2] = (arr[i] * arr[i + 1]) % 10;
	}
	pr_array(arr, 10);
}