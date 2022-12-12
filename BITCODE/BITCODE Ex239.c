//BITCODE Ex239
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int m;
	int v;
	printf("가격 >> ");
	scanf("%d", &m);
	if (m > 200000) {
		v = m - (m * 0.15);
	}
	else if(m > 50000) {
		v = m - (m * 0.1);
	}
	else if (m > 10000) {
		v = m - (m * 0.05);
	}
	else {
		v = m;
	}
	printf("지불금 : %d", v);
	

}