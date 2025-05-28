#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void a();

int main()
{

	a();
	return 0;
}

//C¼·¾¾ FÈ­¾¾
void a()
{
	float b = 0;
	char c = 0;


	printf("¿Âµµ? ");
	scanf("%f %c",&b,&c);


	if (c == 'C')
	{
		printf("%.2f C ==> %.2f F",b, (b * 9.0/5.0) + 32);
	}
	else if (c == 'F')
	{
		printf("%.2f F ==> %.2f C", b, (b -32) * 5.0/9.0);
	}


}