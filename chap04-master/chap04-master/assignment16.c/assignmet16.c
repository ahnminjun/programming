/* ���ϸ�: assignment16.c

 * ����: ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ����
 * ����Ͽ� ������ ǥ���ϹǷ� 24��Ʈ Ʈ���÷���� �Ѵ�. ��ǻ�� �ý��ۿ����� 32��Ʈ ��������
 * ������ ����Ʈ���� red, green, blue ������ ���� ������ �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ�
 * 0���� ä���. 0~255 ������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������
 * ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 
 * 16������ ����Ѵ�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.19.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment16(int red, int green, int blue);

int main()
{
	//256�� �����÷ο�� ����� ���� char���� ���
	unsigned char red = 0;
	unsigned char green = 0;
	unsigned char blue = 0;
	unsigned int a = 0;

	printf("red?: ");
	scanf("%d", &red);

	printf("green?: ");
	scanf("%d", &green);

	printf("blue?: ");
	scanf("%d", &blue);

	a = assignment16(red,green,blue);

	printf("RGB Ʈ���÷�: %06X", a);

	return 0;

}

int assignment16(unsigned char red, unsigned char green, unsigned char blue)

{
	/* unsigned int move_red = red << 0;
	unsigned int move_green = green << 8;
	unsigned int move_blue = blue << 16;

	
	return move_red | move_green | move_blue;*/


	//red�� ��Ʈ�� �״��, green�� ��Ʈ�� 8��ŭ �δ�, blue�� ��Ʈ�� 16��ŭ �δ�.
	// OR �����ڸ� ��� �� ������ 0�� 1 �� �� �ϳ��� 1�̿��� 1�� ��ȯ�ϴ�
	// ���� �״�� ������ ä ��Ʈ�� �� ���� ���� �� �ִ�

	int RGB_Color = red | green << 8 | blue << 16;

	return RGB_Color;


}