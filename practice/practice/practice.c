#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Exchange 1120

void main() {
	//�μ��� ��
	/*
	int a, b,s;
	printf("a : ");
	scanf("%d", &a);

	printf("b : ");
	scanf("%d", &b);

	s = a + b;
	printf("�μ��� �� : %d", s);
	*///�μ��� ��

	//���� ���
	/*
	int day, fly, hotel, money, all;

	printf("������ ����ΰ���? : ");
	scanf("%d", &day);

	printf("�װ��� ���� : ");
	scanf("%d", &fly);
	
	printf("ȣ�� 1�� ���� : ");
	scanf("%d", &hotel);

	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf("%d", &money);

	printf("=============================\n");
	all = day * (hotel + money) + fly;
	printf("�� ���� ��� : %d", all);
	*///

	//�� ���� �����
	/*
	int x, y, s, d;
	printf("ù ��° ���ڸ� �� �Է��Ͻÿ�. : ");
	scanf("%d", &x);

	printf("�� ��° ���ڸ� �� �Է��Ͻÿ�. : ");
	scanf("%d", &y);


	if (x >= y) {
		d = x - y;
	}
	else{
		d = y - x;
	}
	printf("�μ��� �� : %d\n", x + y);
	printf("�μ��� �� : %d\n", d);
	printf("�μ��� �� : %d\n", x * y);
	printf("�μ��� �� : %d\n", x / y);
	*/
	
	//������ �� ��ȯ
	/*
	int x = 100, y = 200, z;

	printf("%d\n",x);
	printf("%d\n",y);

	z = y;
	y = x;
	x = z;

	printf("%d\n",x);
	printf("%d\n",y);
	*/

	//�޷��� ��ȭ�� ���
	/*
	int dollar, k_money;
	printf("�޷�ȭ �ݾ��� �Է��ϼ���. : ");
	scanf("%d", &dollar);

	k_money = dollar * Exchange;

	printf("�޷�ȭ %d�޷��� %d���Դϴ�.", dollar, k_money);
	*/

	//�¾�� ���� �ð�
	/*
	double speed = 300000;
	double r = 149600000;
	double min = r / speed;
	double sec = min / 60;
	printf("���� �ӵ��� %lfkm/s\n",speed);
	printf("�¾�� �������� �Ÿ� %lfkm\n",r);
	printf("���� �ð��� %lf��",sec);
	*/


}