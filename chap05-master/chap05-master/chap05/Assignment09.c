#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result(int hamburger, int potato, int cola);

int main()
{
	int a = 0, b = 0, c = 0;

	printf("�ܹ��� ����? ");
	scanf("%d", &a);

	printf("����Ƣ�� ����? ");
	scanf("%d", &b);

	printf("�ݶ� ����? ");
	scanf("%d", &c);

	result(a, b, c);

	return 0;

}

int result(int hamburger, int potato, int cola)
{
	int hamburger_set = 0;
	
	


	while (hamburger >= 1 && potato >= 1 && cola >= 1)
	{
		hamburger -= 1;

		potato -= 1;

		cola -= 1;

		hamburger_set += 1;


	}

	printf("��ǰ�� �ܰ� ���� �ݾ�\n");

	if (hamburger == 0) {
		// �ƹ��͵� ������� ����
	}
	else {
		printf("�ܹ��� 4000 %d, %d\n", hamburger, hamburger * 4000);
	}

	if (hamburger_set == 0) {
		// �ƹ��͵� ������� ����
	}
	else {
		printf("��Ʈ 6500 %d, %d\n", hamburger_set, hamburger_set * 6500);  
	}

	if (potato == 0) {
		// �ƹ��͵� ������� ����
	}
	else {
		printf("����Ƣ�� 2000 %d, %d\n", potato, potato * 2000);
	}

	if (cola == 0) {
		// �ƹ��͵� ������� ����
	}
	else {
		printf("�ݶ� 1500 %d, %d\n", cola, cola * 1500);
	}

	printf("------------------------\n");
	printf("�հ�         %d", hamburger * 4000 + potato * 2000 + cola * 1500 + hamburger_set * 6500);






}