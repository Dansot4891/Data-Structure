#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void main() {
	//파일생성 및 파일에 문자 저장하기
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

	//생성된 파일 삭제
	/*
	if (remove("test.txt") == 0) {
		printf("test.txt를 삭제하였습니다.");
	}
	*/

	//생성된 파일 내용 불러오기(파일이 생성되어 있을때만 작동함)
	/*
	char c; //int도 사용 가능
	FILE* fp;
	fp = ("text.txt", "r");

	while ((c = fgetc(fp)) != EOF) {
		purchar(c);
	}fclose(fp);
	*/

	//파일 내용 카피하기
	/*
	FILE* fp1, * fp2;
	char file1[50], file2[50];
	char buf[50];
	//fiel1 은 카피할 문서의 제목, file2는 카피해서 옮길 문서의 제목
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

	//형식화된 파일 입력
	/*
	int i = 100;
	float f = 3.125;

	FILE* fp;
	fp = ("sample1.txt", "w");
	
	fprintf(fp, "%d %f", i, f);
	fclose(fp);
	*/

	//형식화된 파일 출력
	/*
	int i;
	float f;

	FILE* fp;
	fp = ("sample1.txt", "r");

	fscanf(fp, "%d %f", &i, &f);
	fclose(fp);
	*/

	//성적 파일 입력하고 출력해서 평균,총합 구하기
	/*
	FILE* fp;
	int num, cnt = 0;
	float score, total = 0;
	char fname[50], name[50];

	printf("input : ");
	scanf("%s", &fname);

	fp = (fname, "w");

	while (1) {
		printf("(음수면 종료) 학번, 이름, 성적 입력 : ");
		scanf("%d", &num);
		if (num < 0) {
			break;
		}
		scanf("%s %f", &name, &score);
		fprintf(fp, "%d %s %f", num, name, score);
	}
	fclose(fp);
	//eof = end of file(파일의 끝)
	fp = (fname, "r");
	while (!feof(fp)) { //파일의 끝이 아닐시 계속 반복한다
		fscanf(fp, "%d %s %f", &num, &name, &score);
		total += score;
		cnt++;
	}
	printf("total = %f, avg = %f\n",total, total / cnt);
	fclose(fp);
	*/
}
