#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int *p, int size) {  //�����ͷ� �Ű������� �޾ƾ���
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d ", p[i]); //������ ���
	}
}

double get_arr(int *p,int size) { //�����ͷ� �޾ƾ���
	int i;
	double sum = 0;
	for (i = 0; i < size; i++) {
		sum += p[i]; //������ ���
	}return sum;
}

void main(){
	//�迭, �Լ�
	/*
	int arr[] = { 10,20,30,40,50 };
	int i, size = 0;

	int* p;
	p = arr;

	size = sizeof(arr) / sizeof(arr[0]);
	double sum = 0;

	print_arr(p, size); //�����ͷ� �Ű������� ���
	sum = get_arr(p,size);

	printf("\nsum = %lf, avg = %lf", sum,sum/size);
	*/

	//���ڿ�
	/*
	char str1[] = "ok_nok";
	char str2[10];
	str1[2] = '?';

	gets_s(str2, 10);
	printf("str2 = %s\n", str2);

	//scanf("%s", str1);
	printf("str1 = %s\n", str1);
	
	//���ڿ� ���� ��� ���1
	int size1 = sizeof(str1) / sizeof(str1[0]);
	
	//���ڿ� ���� ��� ���2
	int size2 = strlen(str1);
	printf("length = %d\n", size2);

	//���ڿ� ���� ��� ���3
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