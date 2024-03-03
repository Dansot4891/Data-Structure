#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prt() {
	printf("*************\n");
}

int in_val() {
	int ins;
	printf("input : ");
	scanf("%d", &ins);
	return ins;
}

int val_sum(int a) {
	return a + 100;
}

void star(int a) {
	for (int i = 0; i < a; i++) {
		printf("*           *\n");
	}
}

void main() {
	//prt(); // 함수
	int a,b;
	//a = in_val();

	//printf("a = %d\n", a);
	//int sum = val_sum(a);
	//printf("sum = %d\n", sum);
	printf("몇줄? : ");
	scanf("%d", &b);
	prt();
	star(b);
	prt();
}