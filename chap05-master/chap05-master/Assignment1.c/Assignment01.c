#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int screen(int x1,int x2,int y1,int y2,int x3, int y3);

int main()
{
	int a = 0, b = 0, c = 0, d = 0,e = 0,f = 0;

	printf("���� ������ �»����(left, top)?");
	scanf("%d %d", &a, &b);

	printf("���� ������ �»����(right, bottom)?");
	scanf("%d %d", &c, &d);

	printf("���� ��ǥ(x, y)?");
	scanf("%d %d", &e, &f);

	screen(a, b, c, d, e, f);
	

}


int screen(int x1, int x2, int y1, int y2, int x3, int y3)
{
	if (x1 <= x3 && x3 <= x2 && y1 <= y3 && y3 <= y2)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���� �ƴմϴ�.\n");
	}


	return 0;
}
