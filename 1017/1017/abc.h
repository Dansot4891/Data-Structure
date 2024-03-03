#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max 100
#define height 20
#define str 'a'
#undef str

int read_in() {
	int a;
	scanf("%d", &a);
	return a;
}

int set_a() {
	int a;
	printf("너비를 입력해주세요. : ");
	scanf("%d", &a);
	return a;
}

int area() {
	int c = height;
	int d = set_a();

	return c * d;
}