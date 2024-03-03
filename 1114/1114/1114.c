#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prt_star() {
	printf("***************\n");
}

void prt_star2() {
	printf("*             *\n");
}

int input_val() {
	int a;
	printf("input : ");
	scanf("%d", &a);
	return a;
}

int minus(int a, int b) {
	if (a > b) {
		return a - b;
	}
	else if (a < b) {
		return b - a;
	}
	else {
		return 0;
	}
}

int plus(int a, int b) {
	return a + b;
}

int div(int a, int b) {
	if (a > b) {
		return a / b;
	}
	else if (a < b) {
		return b / a;
	}
	else {
		return 1;
	}
}
int mult(int a, int b) {
	return a * b;
}
void main() {

	int in_val;
	in_val = input_val();

	prt_star();
	for (int i = 0; i < in_val; i++) {
		prt_star2();
	}
	prt_star();
	int a, b, c, d;
	a = plus(5, 10);
	b = minus(5,10);
	c = div(5,10);
	d = mult(5,10);
	printf("a = %d b = %d c = %d d = %d",a, b,c,d);
}