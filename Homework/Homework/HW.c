#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int size;
	printf("���� ������ : ");
	scanf("%d", &size);

	if (size < 100) {
		printf("Small");
	}
	else if (size >= 100 && size < 200) {
		printf("Medium");
	}
	else if (size >= 200) {
		printf("Large");
	}
	else {
		printf("�ùٸ��� ���� �������Դϴ�.");
	}
}