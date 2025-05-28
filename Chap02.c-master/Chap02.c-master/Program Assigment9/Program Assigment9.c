/* 파일명: Program assignment9.c

 * 내용: PA09. 16진수 정수로 입력받아 10진수로 출력하는 프로그램을 작성하시오.

 * 작성자: 안민준

 * 날짜: 2025.3.30

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void a(void);

int main()
{
	a();

	return 0;
}

void a() {
	int number;

	printf("16진수 정수?");

	scanf("%x", &number);

	printf("16진수 %x는 10진수로 %d입니다.", number, number);

	return 0;
}
