#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printstar(int x) {
	printf("***********\n");
	for (int i = 1; i <= x; i++) {
		printf("*         *\n");
	}printf("***********\n");

}
void main() {
	int a;
	int sum = 0;

	while (1) {
		printf("(100�Է½� ����) input : ");
		scanf("%d", &a);
		
		if (a < 0) {
			printf("����� �Է����ּ���.\n");
			continue;
		}if (a == 100) {
			break;
		}
		sum += a;
	}printf("�� : %d", sum);

	//��ø ������
	/*
	int n;
	printf("input : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n",i, j, i * j);
		}printf("\n");
	}
	*/

	//���丮��
	/*
	int x;
	printf("input : ");
	scanf("%d", &x);
	long fac = 1;
	
	for (int i = 1; i <= x; i++) {
		fac *= (long)i;
	}
	printf("%d! = %ld", x, fac);
	*/

	//��, ������ �����
	/*
	int n,x;

	printf("���ϰ���� �������� �� �Է� : ");
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", n, i, n * i);
	}
	printf("���� �� �� : ");
	scanf("%d", &x);
	printstar(x);
	*/

	//���� ���߱�, break
	/*
	int com, gue;
	int count = 0;
	srand(time(NULL));
	com = rand() % 50;
	
	while (1) {
		count++;
		printf("���� �Է����ּ���. : ");
		scanf("%d", &gue);
		if (gue == com) {
			printf("�����Դϴ�.");
			printf("�õ��� ȸ�� : %d", count);
			break;
		}
		else if (gue > com) {
			printf("�� ���� ���� �Է����ּ���.\n");
		}
		else {
			printf("�� ū ���� �Է����ּ���.\n");
		}
	}
	*/


	//�ִ� �����
	/*
	int x, y, r;
	printf("���� �Է����ּ���. : (ū��) (������)");
	scanf("%d %d",&x,&y);
	
	while (y!=0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ����� : %d", x);
	*/
}