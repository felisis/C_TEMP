//BITCODE Ex272
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int pnum(int n) {
	int count = 0; int num = 1;
	while (count < n) {
		num++;
		bool prime = true;
		for (int i = 2; i < num; i++) {
			if (num % i == 0) prime = false;
		}
		if (prime) {
			count++;
		}
	}
	return num;
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("num >> ");
	printf("%d",pnum(n));


}