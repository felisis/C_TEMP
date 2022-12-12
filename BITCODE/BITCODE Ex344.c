//BITCODE Ex344
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int* func(int x) { //static 변수로 선언
	static int a[4] = { 10,20,30,40 };
	return a;
}

int* matrix(int arr[], int n) {//동적할당
	int* m_arr = (int*)malloc(n * sizeof(int));
	for (int a = 0; a < n; a++)
		m_arr[a] = arr[a] * 2;
	return m_arr;
	//동적할당의 경우 넘겨받은 함수에서 free();
}

int main(void) {
	int x = 0;
	int* a = func(x);
	for (int i = 0; i < 4; i++)
		printf("%d ", *(a + i));
}