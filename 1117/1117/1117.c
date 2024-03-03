#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int global;

void sub() {
	printf("sub = %d\n", global);
}

void sub2() {
	printf("sub2 = %d\n", global);
}

void sub3() {
	global = 321;
	printf("sub3 = %d\n", global);
}

int input_in() {
	int x;
	scanf("%d", &x);
	return x;
}

float input_f() {
	float x;
	scanf("%f", &x);
	return x;
}

void s_sub() {
	int c1 = 0;
	static int c2 = 0;
	c1++;
	c2++;
	printf("c1 = %d\n", c1);
	printf("c2 = %d\n", c2);
	printf("----------------\n");
}

int fac(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * fac(x - 1);
	}
}

int fac1(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * fac1(x-1);
	}
}
void main() {
	//input_in
	/*
	int in_val1;
	printf("입력 : ");
	
	in_val1 = input_in();
	printf("입력 : %d\n", in_val1);
	*/

	//input_f
	/*
	float f_val1;
	printf("입력 : ");

	f_val1 = input_f();
	printf("입력 = %f", f_val1);
	*/

	//sub, sub2
	/*
	sub();
	sub2();
	sub3();
	*/

	//static 변수 - s_sub
	/*
	s_sub();
	s_sub();
	s_sub();
	*/

	//순환호출(자기자신 함수 호출) - fac
	/*
	int in_val, rst = 0;
	printf("입력 : ");
	
	in_val = input_in();
	rst = fac(in_val);

	printf("Factorial(%d) = %d", in_val, rst);
	*/

	
	int rst[5] = { 0 };
	srand(time(NULL));
	printf("[");
	for (int i = 0; i < 5; i++) {
		rst[i] = rand() % 100 + 51;
		printf("%d ", rst[i]);
	}
	printf("\b]");
	
}