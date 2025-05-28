/* 파일명: Program assignment2.c

 * 내용: PA02.학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 
 * 학생의 번호는 정수로 학점은 실수로 입력받는다.

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


void a()
{
	int number;
	float grade;

	scanf("%d %f", &number, &grade);
	printf("번호? %d \n학점? %f", number, grade);

	return 0;
}
