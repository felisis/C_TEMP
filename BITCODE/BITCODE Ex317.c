//BITCODE Ex317
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int arr[][3] = { {1,2,3},{4,5,6} };
	printf("%d %d\n", arr, arr[0]);
	printf("%d %d\n", *arr, *arr[0]);
	printf("%d %d\n", **arr, *arr[1]);
}