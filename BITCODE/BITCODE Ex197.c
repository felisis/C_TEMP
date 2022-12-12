//BITCODE Ex197
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

void func(char *str , int len) {
	printf("%s %d\n", str, len);
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j <= len; j++) {
			if(str[j] == ' ' | j == len){
				for (int k = i; k < j; k++) {
					printf("%c", str[k] > 90 ? str[k] - 32 : str[k]);
				}
				printf("\n");
				i = j;
				break;
			}
		}
	}
}
int main(void) {
	char str[100];
	printf("Enter Sentence >> ");
	gets(str);
	func(str, strlen(str));
}