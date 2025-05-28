/* 파일명: Assignment10.c

 * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오

 * 작성자: 안민준

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dollar();

int main()
{
	dollar();
	return 0;
}

void dollar()
{
	float USD;
	float exchange_rate;
	printf("USD? ");
	scanf("%f", &USD);
	printf("원/달러 환율? ");
	scanf("%f", &exchange_rate);
	printf("USD %.2f = KRW %.2f",USD, USD * exchange_rate);
	

}
