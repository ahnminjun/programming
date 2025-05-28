/* 파일명: Program assignment10.c

 * 내용: PA10. 정수를 8진수,10진수,16진수 중 하나로 입력받아
 * 각각 얼마에 해당하는지 출력하는 프로그램을 작성하시오.

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
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	printf("정수?");
	scanf("%i", &number);

	printf("8진수: %o\n10진수: %d\n16진수: %x", number, number, number);
	return 0;


}
