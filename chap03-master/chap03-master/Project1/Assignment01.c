/* 파일명: Assignment01.c

 * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 안민준

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square();

int main()
{
	square();

	return 0;

}


void square()
{
	int square;
	printf("한 변의 길이? ");
	scanf("%d", &square);

	printf("정사각형의 넓이: %d\n", square * square);
	printf("정사각형의 둘레: %d\n", square * 4);

}