//BITCODE Ex211
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void str_forward(char* str) {
	int len = 0;
	char plus="";
	len = strlen(str);
	printf("%d\n", len);
	if (len < 3) {
		printf("%s",str);
	}
	else {
		for (int i = 0; i <= 2; i++) {
			printf("%c", str[i]);
		}
	}
}

int main(void) {
	char str[100];
	printf("문자열 입력 >> ");
	gets(str);
	str_forward(str);
		

}