/* ���ϸ�: Assignment07.c

 * ����: �Ǽ����� �Է¹޾� �� ���� �����̰� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234e2ó�� ���� ǥ�� �����
 * �� �� ����� �� �ְ� �ϰ� ������ �������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void actual_number();

int main()
{
	actual_number();
	return 0;
}

void actual_number()
{
	double actual_number;
	printf("�Ǽ�? ");
	scanf("%lf", &actual_number);
	printf("����: %e\n", actual_number * actual_number);
	printf("������: %e", actual_number * actual_number * actual_number);



}