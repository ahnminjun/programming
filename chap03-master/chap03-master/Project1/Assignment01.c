/* ���ϸ�: Assignment01.c

 * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square();

int main()
{
	square();

	return 0;

}


void square()
{
	int square;
	printf("�� ���� ����? ");
	scanf("%d", &square);

	printf("���簢���� ����: %d\n", square * square);
	printf("���簢���� �ѷ�: %d\n", square * 4);

}