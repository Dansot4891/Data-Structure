#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	//�����Ǵ�
	/*
	int x;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d", &x);

	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		printf("%d���� �����Դϴ�.", x);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.", x);
	}
	*/

	//���� ������
	/*
	int coin = rand();
	if (coin %2==0) {
		printf("�ո��Դϴ�.");
	}
	else {
		printf("�޸��Դϴ�.");
	}
	*/

	//large small
	/*
	int n;
	printf("n : ");
	scanf("%d", &n);

	if (n >= 100) {
		printf("Large");
	}
	else if (n < 100) {
		printf("Small");
	}
	*/

	//����
	/*
	int x;
	char a;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d", &x);

	if (x >= 90) {
		a = 'A';
	}else if (x >= 80) {
		a = 'B';
	}
	else if (x >= 70) {
		a = 'C';
	}
	else if (x >= 60) {
		a = 'D';
	}
	else if (x >= 50) {
		a = 'E';
	}
	else {
		a = 'F';
	}
	printf("���� %c", a);
	*/

	//����
	/*
	int x, y;
	char c;

	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d %c %d", &x, &c, &y);

	if (c == '+') {
		printf("%d",x + y);
	}
	else if (c == '-') {
		printf("%d", x - y);
	}
	else if (c == '*') {
		printf("%d", x * y);
	}
	else if (c == '/') {
		printf("%d", x / y);
	}
	else {
		printf("�������� �ʴ� �������Դϴ�.");
	}
	*/

	//�� ���� ���� �� ū �� ã��
	/*
	int x, y, z;
	printf("3���� ������ �Է��Ͻÿ�. : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y && x > z) {
		printf("���� ū ������ %d�̴�.", x);
	}
	else if (y > x && y > z) {
		printf("���� ū ������ %d�̴�.", y);
	}
	else if (z > y && z > x) {
		printf("���� ū ������ %d�̴�.", z);
	}
	else {
		printf("ũ�Ⱑ �Ȱ��� ���� �ֽ��ϴ�.");
	}
	*/

	//HW 4�� �߰����� 2������
	/*
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
	*/

	//switch
	/*	int score;
	char grade;

	printf("���� : ");
	scanf("%d", &score);

	score = score / 10;

	switch (score) {
		case 10: case 9: grade = 'A';
		case
		 
	}
	*/

}