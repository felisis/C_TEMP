//BITCODE Ex279
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int sum=0, N;
	scanf("%d", &N);
	srand(time(NULL));
	for (int n = 0; n < 5; n++) {
		int answer = rand() % 10 + 1;
		printf("%d ", answer);
		sum += answer;
	}
	if (5 * N > sum) {
		printf("\nB");
	}
	else {
		printf("\nS");
	}


}