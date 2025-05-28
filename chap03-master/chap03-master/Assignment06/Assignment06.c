/* 파일명: Assignment06.c

 * 내용: 아파트의 면적을 제곱미터(m²)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오
 * 1m²는  0.3025 평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.

 * 작성자: 안민준

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void area();

int main()
{
	area();
	return 0;

}

void area()
{
	const float area = 0.3025;
	float apt;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &apt);
	printf("%.2f 제곱미터 = %.2f 평", apt, apt * area);


}
