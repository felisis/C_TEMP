//BITCODE Ex343
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int n, **arr;
	printf("enter>> ");
	scanf("%d", &n);

	arr = (int(*)[])malloc(sizeof(int) * n); // 배열5개

	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * 2); // 배열크기 2
	
	for (int i = 0; i < n; i++) {
		printf("stu %d : ", i + 1);
		scanf("%d %d", arr[i], arr[i] + 1);
	}
	float avg_mat = 0, avg_sci = 0;
	for (int i = 0; i < n; i++) {
		avg_mat += arr[i][0];
		avg_sci += arr[i][1];
	}
	avg_mat /= 5;
	avg_sci /= 5;
	printf("mat_avg = %.1f, sci_avg = %1.f", avg_mat, avg_sci);
	
	

	

}