#include <stdio.h>
#include <string.h>
#include "contact.h"



void testContact();

int main()
{

	testContact();

}

void testContact()
{
	
	Contact c1 = { "ȫ�浿", "01027770000", MAN, 2025 };
	Contact c2 = { "ȫ�浿", "01027770000", MAN, 2025 };
	Contact c3 = { "��浿", "01027770000", MAN, 2025 };

	
	int result1 = isEqualContact(c1, c2);
	
	int result2 = isEqualContact(c2, c3);
	printContact(c1);
	printf("c1�� c2�� %s\n", result1 ? "�����ϴ�" : "�ٸ��ϴ�");
	printContact(c2);
	printf("c2�� c3�� %s\n", result2 ? "�����ϴ�" : "�ٸ��ϴ�");

}