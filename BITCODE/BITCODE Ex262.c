//BITCODE Ex262
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void blindPhoneNumber(char* str) {
	int count = 0, ind = -1;
	while (count < 2) {
		ind++;
		if (str[ind] == '-') count++;
	}
	for (int i = 0; str[i]; i++) {
		if (i >= ind - 2 & i != ind & i <= ind + 2) {
			printf("*");
		}
		else printf("%c", str[i]);
	}
}

int main(void) {
	char str[100];
	printf("enter >> ");
	gets(str);
	blindPhoneNumber(str);

}