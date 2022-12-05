//BITCODE Ex119
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int age;
	char trf;
	printf("나이를 입력하세요:");
	scanf(" %d", &age);
	if (age > 11) {
		printf("통과");
	}
	else {
		printf("부모님과 동행하였습니까?(Y/N):");
		scanf(" %c", &trf);
		if (trf == 'Y'||trf =='y') {
			printf("통과");
		}
		else {
			printf("거절");
		}
	}

}