/* ���ϸ�: Assignment04.c

 * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ����
 * ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ũ��� N������ �Է¹ް�, �̵��� �Ÿ��� m ������
 * �Է¹޴´�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void strenght();

int main()
{
	strenght();
	return 0;
}

void strenght()
{
	float strenght;
	float distance;
	printf("��(N)? ");
	scanf("%f", &strenght);
	printf("�̵��Ÿ�(m)? ");
	scanf("%f", &distance);
	printf("���� �� %.2f J", strenght * distance);



}