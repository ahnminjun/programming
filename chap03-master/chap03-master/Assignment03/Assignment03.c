/* ���ϸ�: Assignment03.c

 * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
 * ������ kg����, ���̴� m������ �Է¹޴´�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void potential_energy();

int main()
{
	potential_energy();
	return 0;
}

void potential_energy()
{
	int mass;
	int high;

	printf("����(kg)? ");
	scanf("%d", &mass);
	printf("����(m)? ");
	scanf("%d", &high);

	printf("��ġ������: %f J", 9.8 * mass * high);


}
