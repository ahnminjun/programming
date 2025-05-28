#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result(int hamburger, int potato, int cola);

int main()
{
	int a = 0, b = 0, c = 0;

	printf("햄버거 개수? ");
	scanf("%d", &a);

	printf("감자튀김 갯수? ");
	scanf("%d", &b);

	printf("콜라 개수? ");
	scanf("%d", &c);

	result(a, b, c);

	return 0;

}

int result(int hamburger, int potato, int cola)
{
	int hamburger_set = 0;
	
	


	while (hamburger >= 1 && potato >= 1 && cola >= 1)
	{
		hamburger -= 1;

		potato -= 1;

		cola -= 1;

		hamburger_set += 1;


	}

	printf("상품명 단가 수량 금액\n");

	if (hamburger == 0) {
		// 아무것도 출력하지 않음
	}
	else {
		printf("햄버거 4000 %d, %d\n", hamburger, hamburger * 4000);
	}

	if (hamburger_set == 0) {
		// 아무것도 출력하지 않음
	}
	else {
		printf("세트 6500 %d, %d\n", hamburger_set, hamburger_set * 6500);  
	}

	if (potato == 0) {
		// 아무것도 출력하지 않음
	}
	else {
		printf("감자튀김 2000 %d, %d\n", potato, potato * 2000);
	}

	if (cola == 0) {
		// 아무것도 출력하지 않음
	}
	else {
		printf("콜라 1500 %d, %d\n", cola, cola * 1500);
	}

	printf("------------------------\n");
	printf("합계         %d", hamburger * 4000 + potato * 2000 + cola * 1500 + hamburger_set * 6500);






}