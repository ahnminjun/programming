/* ���ϸ�: Assignment06.c

 * ����: ����Ʈ�� ������ ��������(m��)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�
 * 1m����  0.3025 �� �ش��Ѵ�. ���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void area();

int main()
{
	area();
	return 0;

}

void area()
{
	const float area = 0.3025;
	float apt;
	printf("����Ʈ�� ����(��������)? ");
	scanf("%f", &apt);
	printf("%.2f �������� = %.2f ��", apt, apt * area);


}
