/* 파일명: Assignment03.c

 * 내용: 질량의 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 
 * 질량은 kg단위, 높이는 m단위로 입력받는다.

 * 작성자: 안민준

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void potential_energy();

int main()
{
	potential_energy();
	return 0;
}

void potential_energy()
{
	int mass;
	int high;

	printf("질량(kg)? ");
	scanf("%d", &mass);
	printf("높이(m)? ");
	scanf("%d", &high);

	printf("위치에너지: %f J", 9.8 * mass * high);


}
