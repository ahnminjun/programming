/* ���ϸ�: Assignment10.c

 * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dollar();

int main()
{
	dollar();
	return 0;
}

void dollar()
{
	float USD;
	float exchange_rate;
	printf("USD? ");
	scanf("%f", &USD);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &exchange_rate);
	printf("USD %.2f = KRW %.2f",USD, USD * exchange_rate);
	

}
