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
		printf("���� �ð�(��)? ");
		scanf("%d", &parking_time);
		

		if (parking_time == 0)
		{
			break;
		}

		if (parking_time > (60 * 24))
		{
			printf("�ʰ��Ǿ����ϴ�.\n");
			continue;
		}


		if (parking_time <= 30)
		{
			printf("���� ���: %d��\n", parking_fee);
			continue; // 30�� ������ ��� ����ϰ� ���� �Է� �ޱ�
		}
		else if (parking_time > 30)
		{
			parking_time -= 30;
			while (parking_time >= 0)
			{
				parking_time -= 10;
				parking_fee += 1000;

			}
			printf("���� ���: %d��\n", parking_fee);
			continue; 


		}
		printf("���� ���: %d��\n", parking_fee);


		

		


	}

	return 0;
	


}