/* 파일명: Program assignment1.c

 * 내용: PA07. 옷 사이즈(S,M,L)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
 * 옷 사이즈는 S,M,L 세 가지 문자 중 하나로 입력받는다.

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
	char clothes;

	printf("옷 사이즈(S,M,L)?\n");

	scanf(" %c", &clothes);

	printf("%c 사이즈를 선택했습니다.", clothes);

	return 0;

}
