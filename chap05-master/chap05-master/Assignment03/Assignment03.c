#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int coin();

int main()
{
	
	coin();
	return 0;
}


int coin()
{
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	printf("�Ž�����? ");
	scanf("%d", &c);

	printf("�Ž����� (10���̸� ����): %d\n", c);
	while(1)
	{
		if (c < 10)
		{
			break;
		}

		if (c > 50000)
		{
			d = c / 50000;
			e = c % 50000;
			c = e;
			printf("50000�� %d��\n", d);
			continue;
		}
		else if (c > 10000) {
			d = c / 10000;
			e = c % 10000;
			c = e;
			printf("10000�� %d��\n", d);
			continue;
		}
		else if (c > 5000) {
			d = c / 5000;
			e = c % 5000;
			c = e;
			printf("5000�� %d��\n", d);
			continue;
		}
		else if (c > 1000) {
			d = c / 1000;
			e = c % 1000;
			c = e;
			printf("1000�� %d��\n", d);
			continue;
		}
		else if (c > 100) {
			d = c / 100;
			e = c % 100;
			c = e;
			printf("100�� %d��\n", d);
			continue;
		}
		else if (c > 10) {
			d = c / 10;
			e = c % 10;
			c = e;
			printf("10�� %d��\n", d);
			continue;
		}
	



	}
    

	
}