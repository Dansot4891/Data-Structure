#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int year, month, days;

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
}