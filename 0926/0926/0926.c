#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define plus 1.06
#include <math.h>

void main() {
	//�� ��ȯ
	/*
	int i;
	float f;
	
	f = 5 / 4;
	printf("5/4 = %f\n", f);

	f = (float)5 / 4; // f = (float)5 / (float)4;
	printf("5/4 = %f\n", f);

	i = 3.5 + 4.6;
	printf("3.5 + 4.6 = %d\n", i);

	i = (int)3.5 + (int)4.6;
	printf("3.5 + 4.6 = %d\n", i);
*/
	
	//2�� �Լ� ���
	/*
	float x, y;
	printf("x : ");
	scanf("%f", &x);
	
	y = 3.0 * pow(x,2) + 7 * x + 9.0;
	printf("y = 3.0 *  + 7 * x + 9.0 = %f", y);
	*/

	//���� ���
	/*
	double a,c,rate1;
	int m,b,rate;

	a = 24;
	
	printf("�ݾ� : ");
	scanf("%d", &m);

	printf("�⵵ : ");
	scanf("%d", &b);

	printf("���� : ");
	scanf("%d", &rate);

	rate1 = 1 + (double)rate / 100;

	c = a * pow(rate1, b);
	printf("%d�� ���� %d�ۼ�Ʈ ������ = %lf",b, rate, c);
	*/

	//if else�� ���ã��
	/*
	int a;

	printf("�Է� : "); scanf("%d", &a);
	if (a % 3 == 0) {
		if (a % 5 == 0) {
			printf("3�� 5�� ����Դϴ�.");
		}
		else
		{
			printf("3�� ����Դϴ�.");
		}
	}
	else {
		if (a % 5 == 0) {
			printf("5�� ����Դϴ�.");
		}
		else
		{
			printf("3�� 5�� ����� �ƴմϴ�.");
		}
	}
	*/

	//���� ����
	/*
	int a;
	printf("�µ��� �Է����ּ���. : ");
	scanf("%d", &a);

	if (a > 0) {
		printf("������ �����Դϴ�.\n");
	}
	else if (a == 0) {
		printf("0�� �Դϴ�.\n");
	}
	else {
		printf("������ �����Դϴ�.\n");
	}
	printf("���� �µ��� %d�Դϴ�.\n",a);
	*/

	//���� ������
	/*
	int x, y, big;
	x = 10, y = 20;
	big = (x > y) ? x : y;
	printf("Big = %d", big);
	*/
}