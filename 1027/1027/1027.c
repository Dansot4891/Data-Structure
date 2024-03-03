#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	//배열내에서 최대 최소값 구하기
	/*
	int size;
	int a[] = { 10, 95, 4, 33 ,9, 31};
	int min = a[0];
	int max = a[0];
	size = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}

	printf("최소값 = %d\n", min);
	printf("최대값 = %d\n", max);
	*/
	
	//배열값 직접 입력하기 및 값 찾기/최대/최소
	/*
	int a[10] = {0};
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100 + 1;
		printf("%d  ", a[i]);
	}
	int x, cnt = 1;
	printf("\n찾을 값 입력 : ");
	scanf("%d", &x);
	
	int min = a[0];
	int max = a[0];
	int size = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < size; i++) {
		if (x == a[i]) {
			printf("%d값 찾았다", x);
			printf("\n찾은 횟수 = %d", cnt);
			break;
		}cnt++;
		
	}
	
	for (int i = 0; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}

	printf("\n최소값 = %d\n", min);
	printf("최대값 = %d\n", max);
	*/

	//배열 버블 정렬
	/*
	int a[6] = { 9, 11, 2, 62, 33, 6};
	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; i++) {
		printf("%d  ", a[i]);
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d  ", a[i]);
	}
	*/

	//셀렉션 소트
	
	int i, k, tmp, min, idx;
	int val[5] = { 16, 7, 9, 1, 3 };

	printf("Before Val : ");
	for (i = 0; i < 5; i++)
	{
		printf("  %d ", val[i]);
	}

	for (i = 0; i < 5; i++)
	{
		min = 999;
		for (k = i + 1; k < 5; k++)
		{
			if (min > val[k])
			{
				min = val[k];
				idx = k;
			}
		}
		tmp = val[i];
		val[i] = val[idx];
		val[idx] = tmp;
	}
	printf("\nSorted Val : ");
	for (i = 0; i < 5; i++)
	{
		printf("  %d ", val[i]);
	}
	
}