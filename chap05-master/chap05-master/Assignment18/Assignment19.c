#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void parking_fee_(void);

int main()
{

	parking_fee_();


}

void parking_fee_(void)
{
	int parking_fee = 2000;
	int parking_time = 0;


	while(1)
	{
		printf("주차 시간(분)? ");
		scanf("%d", &parking_time);
		

		if (parking_time == 0)
		{
			break;
		}

		if (parking_time > (60 * 24))
		{
			printf("초과되었습니다.\n");
			continue;
		}


		if (parking_time <= 30)
		{
			printf("주차 요금: %d원\n", parking_fee);
			continue; // 30분 이하일 경우 출력하고 다음 입력 받기
		}
		else if (parking_time > 30)
		{
			parking_time -= 30;
			while (parking_time >= 0)
			{
				parking_time -= 10;
				parking_fee += 1000;

			}
			printf("주차 요금: %d원\n", parking_fee);
			continue; 


		}
		printf("주차 요금: %d원\n", parking_fee);


		

		


	}

	return 0;
	


}