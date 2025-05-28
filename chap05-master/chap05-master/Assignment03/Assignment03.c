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

	printf("거스름돈? ");
	scanf("%d", &c);

	printf("거스름돈 (10원미만 절사): %d\n", c);
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
			printf("50000원 %d장\n", d);
			continue;
		}
		else if (c > 10000) {
			d = c / 10000;
			e = c % 10000;
			c = e;
			printf("10000원 %d장\n", d);
			continue;
		}
		else if (c > 5000) {
			d = c / 5000;
			e = c % 5000;
			c = e;
			printf("5000원 %d장\n", d);
			continue;
		}
		else if (c > 1000) {
			d = c / 1000;
			e = c % 1000;
			c = e;
			printf("1000원 %d장\n", d);
			continue;
		}
		else if (c > 100) {
			d = c / 100;
			e = c % 100;
			c = e;
			printf("100원 %d장\n", d);
			continue;
		}
		else if (c > 10) {
			d = c / 10;
			e = c % 10;
			c = e;
			printf("10원 %d장\n", d);
			continue;
		}
	



	}
    

	
}