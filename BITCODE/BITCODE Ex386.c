//BITCODE Ex386
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int* make_Random(int n) {
	int* m_rand;
	m_rand = (int*)malloc(sizeof(int) * n);
	void srand(unsigned int seed);
	for (int i = 0; i < n; i++) {
		m_rand[i] = rand() % 11;
		printf("%d\n", *(m_rand+i));
	}
	free(m_rand);
}

int main(void) {
	int n;
	scanf("%d", &n);
	make_Random(n);
}