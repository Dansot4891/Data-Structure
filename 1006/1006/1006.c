#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int n;
	int x = 1;

	printf("���ϰ���� �������� �Է����ּ���. : ");
	scanf("%d", &n);

	while (x <= 9)
		printf("%d X %d = %d", n, x, n * x);
		x++;


	//while�� ������ ���ͷ� ��ȯ�ϱ�
	/*
	int meter;
	int i = 0;

	while(1) {
		printf("���͸� ���ϰ� ���� ������ �Է����ּ���. : ");
		scanf("%d", &i);
		if (i == 0)
			break;
		meter = i * 1609;
		printf("%d ������ %d�����Դϴ�.\n", i, meter);
		i++;
	}
	*/


	//while�� sum��factorial ���ϱ�
	/*
	int i = 1, sum = 0, fac = 1;
	
	while (i<10) {
		
		sum += i;
		fac *= i;
		i++;

		
	}
	printf("sum = %d\n", sum);
	printf("factorial = %d\n", fac);
	*/


	//���� �ް� �⵵ �Է�
	/*
	int year,month,days;

	printf("�ϼ��� �˰� ���� �ظ� �Է��Ͻÿ�.");
	scanf("%d", &year);

	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ�.");
	scanf("%d", &month);

	switch (month) {
		case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 11: 
			days = 31; 
			printf("%d�� %d���� �ϼ��� %d�Դϴ�.", year, month, days);
			break;
		
		case 4:	case 6:	case 9: case 12: 
			days = 30;
			printf("%d�� %d���� �ϼ��� %d�Դϴ�.", year, month, days);
			break;

		case 2: if (year % 4 == 0) {
			days = 29;
			printf("%d�� %d���� �ϼ��� %d�Դϴ�.", year, month, days);
		}
			  else {
			days = 28;
			printf("%d�� %d���� �ϼ��� %d�Դϴ�.", year, month, days);
			break;
		default:
			printf("�ùٸ��� ���� ���� �Է��ϼ̽��ϴ�.");
			break;
		}
		
	}
	*/
	

	//���� ���� ��
	/*
	int my, com;

	printf("���� : ����-0  ����-1  ��-2\n");
	printf("����� �Է� : "); scanf("%d", &my);
	printf("��ǻ�� �Է� : ");
	com = rand() % 3;
	printf("%d \n", com);

	if ((my + 1) % 3 == com)
		printf("��ǻ�� �¸�\n");
	else if ((my + 1) % 3 == com)
		printf("����� \n");
	else
		printf("����� �¸� \n");
		*/
}