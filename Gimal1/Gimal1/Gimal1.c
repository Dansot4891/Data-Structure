#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int a[10];
	int b[10] = { 5,3,21,6,84,83,6,11,35,71 };
	int size = sizeof(a)/4;
	int size1 = sizeof(b) / sizeof(b[0]);
	srand(time(NULL));
	
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 50;
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < size1; i++) {
		for (int k = 0; k < size1 - 1; k++) {
			if (b[i] > b[i + 1]) {
				int tmp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = tmp;
			}
		}
		printf("%d ", b[i]);
	}
	int min = a[0];
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (min >= a[i]) {
			min = a[i];
		}
		if (max <= a[i]) {
			max = a[i];
		}
	}printf("최소값 : %d\n", min);
	printf("최대값 : %d\n", max);
}