#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int me,com;
	printf("���������� ����(����-0, ����-1, ��-2)\n");
	printf("(����-0, ����-1, ��-2)�����ϼ���. : ");
	scanf("%d", &me);
	srand(time(NULL));
	com = rand() % 3;
	printf("�� : %d\n", me);
	printf("��ǻ�� : %d\n",com);
	if (com == me) {
		printf("���º�");
	}
	else if ((me == 0 && com == 1) || (me == 1 && com == 2) || (me == 2 && com == 0)) {
		printf("com �¸�");
	}
	else {
		printf("����� �¸�");
	}
}