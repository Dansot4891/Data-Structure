#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void main() {
	//���ϻ��� �� ���Ͽ� ���� �����ϱ�
	/*
	FILE* fp;
	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		printf("fail");
	}
	else {
		printf("success");
	}
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);

	fclose(fp);
	*/

	//������ ���� ����
	/*
	if (remove("test.txt") == 0) {
		printf("test.txt�� �����Ͽ����ϴ�.");
	}
	*/

	//������ ���� ���� �ҷ�����(������ �����Ǿ� �������� �۵���)
	/*
	char c; //int�� ��� ����
	FILE* fp;
	fp = ("text.txt", "r");

	while ((c = fgetc(fp)) != EOF) {
		purchar(c);
	}fclose(fp);
	*/

	//���� ���� ī���ϱ�
	/*
	FILE* fp1, * fp2;
	char file1[50], file2[50];
	char buf[50];
	//fiel1 �� ī���� ������ ����, file2�� ī���ؼ� �ű� ������ ����
	printf("Original : ");
	scanf("%s", &file1);

	printf("Copy : ");
	scanf("%s", &file2);

	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "w");

	while (fgets(buf, 50, fp1) != NULL) {
		fputs(buf, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	*/

	//����ȭ�� ���� �Է�
	/*
	int i = 100;
	float f = 3.125;

	FILE* fp;
	fp = ("sample1.txt", "w");
	
	fprintf(fp, "%d %f", i, f);
	fclose(fp);
	*/

	//����ȭ�� ���� ���
	/*
	int i;
	float f;

	FILE* fp;
	fp = ("sample1.txt", "r");

	fscanf(fp, "%d %f", &i, &f);
	fclose(fp);
	*/

	//���� ���� �Է��ϰ� ����ؼ� ���,���� ���ϱ�
	/*
	FILE* fp;
	int num, cnt = 0;
	float score, total = 0;
	char fname[50], name[50];

	printf("input : ");
	scanf("%s", &fname);

	fp = (fname, "w");

	while (1) {
		printf("(������ ����) �й�, �̸�, ���� �Է� : ");
		scanf("%d", &num);
		if (num < 0) {
			break;
		}
		scanf("%s %f", &name, &score);
		fprintf(fp, "%d %s %f", num, name, score);
	}
	fclose(fp);
	//eof = end of file(������ ��)
	fp = (fname, "r");
	while (!feof(fp)) { //������ ���� �ƴҽ� ��� �ݺ��Ѵ�
		fscanf(fp, "%d %s %f", &num, &name, &score);
		total += score;
		cnt++;
	}
	printf("total = %f, avg = %f\n",total, total / cnt);
	fclose(fp);
	*/
}
