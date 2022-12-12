//BITCODE Ex199
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int gcd(int n, int m) {
	int num = n > m ? m : n;
	while (!(n % num == 0 & m % num == 0)) {
		num--;
	}
	return num;
}

int lcm(int n, int m) {
	int num = n > m ? n : m;
	while (!(num % n == 0 & num % m == 0)) {
		num++;
	}
	return num;
}

int main(void) {
	printf("enter 1st num ");
	int n;
	scanf("%d", &n);
	printf("enter 2st num ");
	int m;
	scanf("%d", &m);
	int GCD = gcd(n, m);
	int LCM = lcm(n, m);
	printf("n >> %d, m >> %d, GCD >>%d\n", n, m, GCD);
	printf("n >> %d, m >> %d, LCM >>%d\n", n, m, LCM);

}