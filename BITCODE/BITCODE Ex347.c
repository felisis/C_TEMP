//BITCODE Ex347
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	char str1[100];
	char str2[100];
	printf("1 >> "); gets_s(str1, sizeof(str1));
	printf("2 >> "); gets_s(str2, sizeof(str2));

	int n1 = 1, n2 = 1, n;
	for (int i = 0; str1[i]; i++)
		if (str1[i] == ' ')
			n1++;
	for (int i = 0; str2[i]; i++)
		if (str2[i] == ' ')
			n2++;
	printf("%d %d", n1, n2);
	n = n1 > n2 ? n1 : n2;
	int** arr;
	arr = (int(*)[])malloc(sizeof(int) * 2);
	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * n);

	//문자열을 잘라서 배열의 값으로 할당.
	n1 = 0; n2 = 0;
	char* ptr = strtok(str1, " ");
	while (ptr != NULL) { //자른 문자열이 나오지 않을때
		arr[0][n1++] = atoi(ptr); //다음 문자열 반환
		ptr = strtok(NULL, " ");
	}
	ptr = strtok(str2, " ");
	while (ptr != NULL) { //자른 문자열이 나오지 않을때
		arr[1][n2++] = atoi(ptr); //다음 문자열 반환
		ptr = strtok(NULL, " ");
	}
	printf("%d", n);
	while (n1 < n | n2 < n) {
		arr[0][n1++] = 0;
		arr[1][n2++] = 0;
	}
	printf("%d %d", n1, n2);
	printf(" >> \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) 
			printf("%d ", arr[i][j]);
		printf("\n");
		free(arr[i]);
	}
	
}