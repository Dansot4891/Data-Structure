#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void modify(int v) {
	v = 99;
	
	printf("%d\n", v);
}

void newmodi(int *v){
	*v = 99;
	printf("%d\n",*v);
}


void main(){
	//������ ����������
	/*
	int num = 10;
	int* p;
	p = &num;

	printf("p = %d\n",*p);
	(*p)++; // �ش��ϴ� ���� ����
	printf("(*p)++ = %d\n", *p);

	printf("*p++ = %d\n", p);
	*p++; // �ּҰ� ����
	printf("*p++ = %d\n", p);
	*/

	//swap, �Լ� ȣ��
	/*
	int a = 10, b = 20;
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	int num = 1;
	modify(num);
	printf("num = %d\n", num);
	newmodi(&num);
	printf("num = %d\n", num);
	*/

	//������ �迭
	/*
	int a[] = { 10, 20, 30 };
	int* p;
	p = a;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n", p[0], p[1], p[2]);
	printf("%d %d %d\n", p[0], p[1] + 1, p[2] + 2);
	printf("%d %d %d\n", p, p + 1, p + 2);
	printf("%d\n",*p);
	printf("%d\n", *++p);
	printf("%d\n", *++p);
	*/

	//�հ� ��ձ��ϱ�
	
	int a[] = { 10,20,30,40,50 };
	double avg = 0, sum = 0;
	int* p;
	p = a;
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(a + i));
		sum += *(p+i);
	}
	avg = sum / 5.0;
	printf("\n�� : %lf, ��� : %lf\n",sum, avg);
	
	/*
	int a[] = { 10,20,30,40,50 };
	double sum = 0, avg = 0;

	int* p;
	p = a;
	for (int i = 0; i < 5; i++) {
		printf("%d ", p[i]);
		sum += p[i];
	}
	avg = sum / 5.0;
	printf("\n�� : %lf, ��� : %lf", sum, avg);
	*/
}