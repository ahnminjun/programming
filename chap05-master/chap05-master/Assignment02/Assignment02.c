#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int c(int x, int y);

int main()
{
	int a = 0; int b = 0;
	printf("���� ��ǥ(x, y)?");
	scanf("%d %d", &a, &b);
	
	c(a, b);

}
 
int c(int x, int y)
{
	if (x > 0 && y > 0)
	{
		printf("1 ��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2 ��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3 ��и鿡 �ֽ��ϴ�.");
	}
	else if (x > 0 && y < 0)
	{
		printf("4 ��и鿡 �ֽ��ϴ�.");
	}







}