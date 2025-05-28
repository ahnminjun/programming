#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int screen(int x1,int x2,int y1,int y2,int x3, int y3);

int main()
{
	int a = 0, b = 0, c = 0, d = 0,e = 0,f = 0;

	printf("선택 영역의 좌상단점(left, top)?");
	scanf("%d %d", &a, &b);

	printf("선택 영역의 좌상단점(right, bottom)?");
	scanf("%d %d", &c, &d);

	printf("점의 좌표(x, y)?");
	scanf("%d %d", &e, &f);

	screen(a, b, c, d, e, f);
	

}


int screen(int x1, int x2, int y1, int y2, int x3, int y3)
{
	if (x1 <= x3 && x3 <= x2 && y1 <= y3 && y3 <= y2)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.\n");
	}


	return 0;
}
