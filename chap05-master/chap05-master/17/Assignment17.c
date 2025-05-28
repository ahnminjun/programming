#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int parking_fee_(int parking_time);

int main()
{
	int aa = 0;

	printf("주차 시간(분)? ");

	scanf("%d", &aa);

	parking_fee_(aa);


	return 0;
}

int parking_fee_(int parking_time)
{
	int parking_fee = 2000;

	if (parking_time <= 30)
	{
		printf("%d", parking_fee);
	}
	else if (parking_time > 30)
	{
		parking_time -= 30;

		do
		{

			parking_time -= 10;
			parking_fee += 1000;

		} while (parking_time >= 0);
	
		printf("주차 요금: %d원", parking_fee);
		// whlie 문 52분이 입력되었을 때 22 12 2 실행
	}

	if (parking_fee > 25000)
	{
		//
	}

	if (parking_time > 60 * 24)
	{
		//
	}

	return 0;

}
