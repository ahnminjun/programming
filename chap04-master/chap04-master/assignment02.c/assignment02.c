/* ���ϸ�: assignment02.c

 * ����: ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ�
 * ���α׷��� �ۼ��Ͻÿ�. 

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.19.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment02(double Fahrenheit_temperature);

int main()
{
	double Fahrenheit_temperature = 0; //ȭ���µ�

	double temperature = 0;

	printf("ȭ���µ�? ");

	scanf("%lf",&Fahrenheit_temperature);

	temperature = assignment02(Fahrenheit_temperature);

	printf("%.2lf F = %.2lf C", Fahrenheit_temperature, temperature);

	return 0;

}

double assignment02(double Fahrenheit_temperature)
{
	double Celsius_temperature = (Fahrenheit_temperature - 32) * 5.0 / 9.0;

	return Celsius_temperature;


}