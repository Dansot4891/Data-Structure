#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*
	int sel;
	float in_fondo;
	float rst;
	float in_sondo;
	float rrst;

	printf("1. ȭ�� -> ����\n");
	printf("2. ���� -> ȭ��\n");

	scanf("%d", &sel);

	if (sel == 1) {
		printf("ȭ�� �µ��� �Է����ּ���. : ");
		scanf("%f", &in_fondo);
		rst = (in_fondo - 32.0) * 5.0 / 9.0;
		printf("ȭ���� %.2f, ������ %.2f \n", in_fondo, rst);
	}
	else if (sel == 2) {
		printf("���� �µ��� �Է����ּ���. : ");
		scanf("%f", &in_sondo);
		rrst = (9.0 / 5.0 * in_sondo) + 32.0;
		printf("������ %.2f, ȭ���� %.2f \n", in_sondo, rrst);
	}
	else {
		printf("�����Դϴ�. �ٽ� �õ����ּ���.");
	}
	*/
	/*
	char ch;


	printf("���� �Է� : ");
	scanf("%c", &ch);
	
	printf("�Է��Ͻ� ���ڴ� %c�̰� ���ڷδ� %d�Դϴ�.", ch, ch);
	*/ //ASCII �ڵ�
	/*
	id, pass;

	printf("ID ____\b\b\b\b");
	scanf("%d", &id);
	*/
	/*
	//getchar() <==> putchar()

	char ch;
	ch = getchar();
	//printf("%c ==> %d", ch, ch);
	putchar(ch);
	*/
	/*
	char ch;
	while (1) //1 = true -> while ���ѹݺ�
	{
		ch = getchar();
		putchar(ch); //ctrl + c = ��������
		if (ch == 'z')
			break;
	}*/
	int idata;

	while ((idata = getchar()) != EOF) {//eof = end of file -> ������ ������Ÿ��(��������) ppt�� �ִ� �� �ڵ� while��[putchar(getchar)]�� �Ȱ���.
		putchar(idata);
	}
}