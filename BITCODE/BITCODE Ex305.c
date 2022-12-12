//BITCODE Ex305
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int vet(int* a, int* b) {
	int vec_ab[3];
	memset(vec_ab, -1, 3*sizeof(int));
	for (int i = 0; i < 3; i++) {
		printf("%d ", vec_ab[i]);
	}
	vec_ab[0] = (a[1] * b[2]) - (b[1] * a[2]);
	vec_ab[1] = (a[2] * b[0]) - (b[2] * a[0]);
	vec_ab[2] = (a[0] * b[1]) - (b[0] * a[1]);
	printf("vet : (%d, %d, %d) ", vec_ab[0],vec_ab[1],vec_ab[2]);
}

int main(void) {
	int a[3];
	int b[3];
	printf(">>");
	scanf("%d %d %d", &a[0], &a[1], &a[2]); // 3 -1 2
	printf(">>");
	scanf("%d %d %d", &b[0], &b[1], &b[2]); // 2 1 3
	vet(a, b);
}//BITCODE Ex305
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int vet(int* a, int* b) {
	int vec_ab[3];
	memset(vec_ab, -1, 3*sizeof(int));
	for (int i = 0; i < 3; i++) {
		printf("%d ", vec_ab[i]);
	}
	vec_ab[0] = (a[1] * b[2]) - (b[1] * a[2]);
	vec_ab[1] = (a[2] * b[0]) - (b[2] * a[0]);
	vec_ab[2] = (a[0] * b[1]) - (b[0] * a[1]);
	printf("vet : (%d, %d, %d) ", vec_ab[0],vec_ab[1],vec_ab[2]);
}

int main(void) {
	int a[3];
	int b[3];
	printf(">>");
	scanf("%d %d %d", &a[0], &a[1], &a[2]); // 3 -1 2
	printf(">>");
	scanf("%d %d %d", &b[0], &b[1], &b[2]); // 2 1 3
	vet(a, b);
}//BITCODE Ex305
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int vet(int* a, int* b) {
	int vec_ab[3];
	memset(vec_ab, -1, 3*sizeof(int));
	for (int i = 0; i < 3; i++) {
		printf("%d ", vec_ab[i]);
	}
	vec_ab[0] = (a[1] * b[2]) - (b[1] * a[2]);
	vec_ab[1] = (a[2] * b[0]) - (b[2] * a[0]);
	vec_ab[2] = (a[0] * b[1]) - (b[0] * a[1]);
	printf("vet : (%d, %d, %d) ", vec_ab[0],vec_ab[1],vec_ab[2]);
}

int main(void) {
	int a[3];
	int b[3];
	printf(">>");
	scanf("%d %d %d", &a[0], &a[1], &a[2]); // 3 -1 2
	printf(">>");
	scanf("%d %d %d", &b[0], &b[1], &b[2]); // 2 1 3
	vet(a, b);
}