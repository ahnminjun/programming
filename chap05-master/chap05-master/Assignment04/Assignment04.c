#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int c();

int main()
{
	c();
}

int c()
{
    int a = 0;
	printf("연도? ");
	scanf("%d", &a);

	if (a % 4 == 0)
	{
		printf("%d년은 윤년입니다", a);
	}
	else if (a % 4 == 0 && a % 100 == 0)
	{
		printf("%d년은 윤년이 아닙니다", a);
	}
	else if (a % 100 == 0 && a % 400 == 0)
	{
		printf("%d년은 윤년입니다", a);
	}






}