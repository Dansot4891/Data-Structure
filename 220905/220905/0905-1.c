#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int fly;
	int hotel;
	int umny;
	int days;

	printf("여행은 몇박인가요?");
	scanf_s("%d", &days);

	printf("항공권 가격 : ");
	scanf_s("%d", &fly);

	printf("호텔 1박 가격 : ");
	scanf_s("%d", &hotel);

	printf("하루에 필요한 용돈 : ");
	scanf_s("%d", &umny);

	printf("=========================");
	printf("총 여행 비용 = %d", (hotel + umny) * days + fly);
}