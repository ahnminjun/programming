#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int c(int x, int y);

int main()
{
	int a = 0; int b = 0;
	printf("점의 좌표(x, y)?");
	scanf("%d %d", &a, &b);
	
	c(a, b);

}
 
int c(int x, int y)
{
	if (x > 0 && y > 0)
	{
		printf("1 사분면에 있습니다.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2 사분면에 있습니다.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3 사분면에 있습니다.");
	}
	else if (x > 0 && y < 0)
	{
		printf("4 사분면에 있습니다.");
	}







}