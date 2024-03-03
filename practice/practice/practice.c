#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Exchange 1120

void main() {
	//두수의 합
	/*
	int a, b,s;
	printf("a : ");
	scanf("%d", &a);

	printf("b : ");
	scanf("%d", &b);

	s = a + b;
	printf("두수의 합 : %d", s);
	*///두수의 합

	//여행 비용
	/*
	int day, fly, hotel, money, all;

	printf("여행은 몇박인가요? : ");
	scanf("%d", &day);

	printf("항공권 가격 : ");
	scanf("%d", &fly);
	
	printf("호텔 1박 가격 : ");
	scanf("%d", &hotel);

	printf("하루에 필요한 용돈 : ");
	scanf("%d", &money);

	printf("=============================\n");
	all = day * (hotel + money) + fly;
	printf("총 여행 비용 : %d", all);
	*///

	//두 수의 연산들
	/*
	int x, y, s, d;
	printf("첫 번째 숫자를 이 입력하시오. : ");
	scanf("%d", &x);

	printf("두 번째 숫자를 이 입력하시오. : ");
	scanf("%d", &y);


	if (x >= y) {
		d = x - y;
	}
	else{
		d = y - x;
	}
	printf("두수의 합 : %d\n", x + y);
	printf("두수의 차 : %d\n", d);
	printf("두수의 곱 : %d\n", x * y);
	printf("두수의 몫 : %d\n", x / y);
	*/
	
	//변수의 값 교환
	/*
	int x = 100, y = 200, z;

	printf("%d\n",x);
	printf("%d\n",y);

	z = y;
	y = x;
	x = z;

	printf("%d\n",x);
	printf("%d\n",y);
	*/

	//달러를 원화로 계산
	/*
	int dollar, k_money;
	printf("달러화 금액을 입력하세요. : ");
	scanf("%d", &dollar);

	k_money = dollar * Exchange;

	printf("달러화 %d달러는 %d원입니다.", dollar, k_money);
	*/

	//태양빛 도달 시간
	/*
	double speed = 300000;
	double r = 149600000;
	double min = r / speed;
	double sec = min / 60;
	printf("빛의 속도는 %lfkm/s\n",speed);
	printf("태양과 지구와의 거리 %lfkm\n",r);
	printf("도달 시간은 %lf초",sec);
	*/


}