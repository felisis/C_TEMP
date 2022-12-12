//BITCODE Ex200
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

bool ismulThree(int n) {
	if (n % 3 == 0) return true;
	else return false;
}

bool ismulFive(int n) {
	if (n % 5 == 0) return true;
	else return false;
}
int main(void) {
	int sum = 0;
	for (int i = 1; i < 100000; i++) {
		if (ismulFive(i) | ismulThree(i)) {
			sum += i;
			printf("%d\n", i);
		}
	}
	printf("Sum = %d", sum);

}