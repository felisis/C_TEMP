//BITCODE Ex348
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

	n = n1 + n2; 
	int len = (n + 1) / 2;
	int** arr;
	arr = (int(*)[])malloc(sizeof(int) * len); // len개만큼의 arr 생성
	for (int i = 0; i < len; i++)
		arr[i] = (int*)malloc(sizeof(int) * 2); // 정수형 2개

	int count = 0;// count가 2*len 보다 작을때까지 ++
	char* ptr = strtok(str1, " ");
	while (ptr != NULL) { //자른 문자열이 나오지 않을때
		arr[count / 2][count % 2] = atoi(ptr);
		ptr = strtok(NULL, " ");
		count++;
	}

	ptr = strtok(str2, " ");
	while (ptr != NULL) { //자른 문자열이 나오지 않을때
		arr[count / 2][count % 2] = atoi(ptr);
		ptr = strtok(NULL, " ");
		count++;
	}
	
	while (count < len * 2) {
		arr[count / 2][count % 2] = 0;
		count++;
	}
	printf("\n%d개\n", n);

	printf(">> \n");
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 2; j++) 
			printf("%d ", arr[i][j]);
		printf("\n");
		free(arr[i]);
	}
	
}