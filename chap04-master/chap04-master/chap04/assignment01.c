/* ���ϸ�: assignment01.c

 * ����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ������ kg����, �ӷ��� m/s ������ �Է¹޴´�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.19.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment01(double mass, double speed);



int main()
{
	double mass = 0;

	double speed = 0;

	printf("����(kg)? ");
	scanf("%lf", &mass);

	printf("�ӷ�(m/s)? ");
	scanf("%lf", &speed);

	double _energy = assignment01(mass, speed);

	printf("�������: %.2lf J\n", _energy);

	return 0;
}

double assignment01(double mass, double speed)
{
	double energy = 0.5 * mass * speed * speed;

	return energy;

}