/* 파일명: Assignment02.c

 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 안민준

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void oblong();

int main()
{

	oblong();
	return 0;

}

void oblong()
{
	int width;
	int length;

	printf("가로의 길이? ");
	scanf("%d", &width);
	printf("세로의 길이? ");
	scanf("%d", &length);

	printf("직사각형의 넓이: %d\n", width * length);
	printf("직사각형의 둘레: %d\n", width * 2 + length * 2);
}