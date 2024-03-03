#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//포인터
	/*
	int num = 10;
	char ch = 69;
	float f = 12.3;
	int* p;
	p = &num;

	printf("num = %d, p =%d\n", &num, p);
	printf("num = %d, *p = %d\n", num, *p);
	num = 20;
	printf("num = %d, *p = %d\n", num, *p);
	*/


	//포인터 증가 연산
	/*
	char* pc;
	int* pi;
	double* pd;

	pc = 10000;
	pi = 10000;
	pd = 10000;

	printf("pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc+2, pi+2, pd+2);
	*/


	// ++*p, *++p, *p++, (*p)++
	/*
	int num = 10, v1, v2;
	int* p;
	p = &num;
	printf("num = %d\n", p);
	v1 = *p++;
	printf("num = %d, p = %d\n", p, v1);
	*/
}