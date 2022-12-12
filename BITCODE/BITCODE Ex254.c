//BITCODE Ex254
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	char str[100] = "";
	printf("enter >>");
	gets(str);
	printf("%C", str[1] <= 'Z' ? str[1] : str[1] - ('a' - 'A'));
	for (int i = 0; i <= strlen(str); i++) {

		if (str[i] == ' ') {
			printf("%C", str[i + 1] <= 'Z' ? str[i + 1] : str[i + 1] - ('a' - 'A'));
		}
	}

}
