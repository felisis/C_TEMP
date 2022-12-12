//BITCODE Ex300
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
void swap(int* arr, int i, int j) {
	int temp = 0;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;	
	return arr;
}

int main(void) {
	int arr[] = { 1,2,3,4,5 };
	int i, j;
	printf("i , j >> \n");
	scanf("%d %d", &i, &j);
	printf("%d %d\n", arr[i], arr[j]);
	swap(arr, i, j);
	printf("%d %d", arr[i], arr[j]);
	
	//printf("%s", func(arr, len1)==1? "True": "false");
}