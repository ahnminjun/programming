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
	
	Contact c1 = { "홍길동", "01027770000", MAN, 2025 };
	Contact c2 = { "홍길동", "01027770000", MAN, 2025 };
	Contact c3 = { "김길동", "01027770000", MAN, 2025 };

	
	int result1 = isEqualContact(c1, c2);
	
	int result2 = isEqualContact(c2, c3);
	printContact(c1);
	printf("c1과 c2는 %s\n", result1 ? "같습니다" : "다릅니다");
	printContact(c2);
	printf("c2과 c3는 %s\n", result2 ? "같습니다" : "다릅니다");

}