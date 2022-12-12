//BITCODE Ex248
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int num, sum = 0;
	bool Loop = true;
	
	while (Loop) {
		printf("num 입력 >> ");
		scanf("%d", &num);
		switch (num) {
		case 0:
			printf(">> %d", sum);
			Loop = false;
			break;
		default:
			sum += num;
			break;
		}
	}

}