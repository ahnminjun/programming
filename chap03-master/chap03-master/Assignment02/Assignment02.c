/* ���ϸ�: Assignment02.c

 * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void oblong();

int main()
{

	oblong();
	return 0;

}

void oblong()
{
	int width;
	int length;

	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", width * length);
	printf("���簢���� �ѷ�: %d\n", width * 2 + length * 2);
}