#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int *p, int size) {  //포인터로 매개변수를 받아야함
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d ", p[i]); //포인터 사용
	}
}

double get_arr(int *p,int size) { //포인터로 받아야함
	int i;
	double sum = 0;
	for (i = 0; i < size; i++) {
		sum += p[i]; //포인터 사용
	}return sum;
}

void main(){
	//배열, 함수
	/*
	int arr[] = { 10,20,30,40,50 };
	int i, size = 0;

	int* p;
	p = arr;

	size = sizeof(arr) / sizeof(arr[0]);
	double sum = 0;

	print_arr(p, size); //포인터로 매개변수를 사용
	sum = get_arr(p,size);

	printf("\nsum = %lf, avg = %lf", sum,sum/size);
	*/

	//문자열
	/*
	char str1[] = "ok_nok";
	char str2[10];
	str1[2] = '?';

	gets_s(str2, 10);
	printf("str2 = %s\n", str2);

	//scanf("%s", str1);
	printf("str1 = %s\n", str1);
	
	//문자열 길이 재는 방법1
	int size1 = sizeof(str1) / sizeof(str1[0]);
	
	//문자열 길이 재는 방법2
	int size2 = strlen(str1);
	printf("length = %d\n", size2);

	//문자열 길이 재는 방법3
	int i = 0;
	while (str1[i] != 0) {
		i++;
	}
	printf("length = %d\n", i);

	for (int i = 0; i < size1; i++) {
		printf("%c ", str1[i]);
	}
	*/

	char name[10] = "ok";
	char name2[10] = "good";
	
	strcpy(name2, name);
	printf("%s => %s\n", name, name2);
	
	strcat(name, name2);
	printf("%s", name);
}