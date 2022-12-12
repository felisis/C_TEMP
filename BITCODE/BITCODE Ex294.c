//BITCODE Ex294
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int arr[3] = { 10,30,20 };

	printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2)); // 10 , 20 , 30
	printf("%d %d %d\n", *&arr[0], *&arr[1], *&arr[2]); // 10 , 20 , 30
	printf("%d \n", *&*&arr[0] + *&*&arr[1]);			// 
}