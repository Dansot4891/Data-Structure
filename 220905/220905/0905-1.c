#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int fly;
	int hotel;
	int umny;
	int days;

	printf("������ ����ΰ���?");
	scanf_s("%d", &days);

	printf("�װ��� ���� : ");
	scanf_s("%d", &fly);

	printf("ȣ�� 1�� ���� : ");
	scanf_s("%d", &hotel);

	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf_s("%d", &umny);

	printf("=========================");
	printf("�� ���� ��� = %d", (hotel + umny) * days + fly);
}