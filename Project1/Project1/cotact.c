#include <stdio.h>
#include <string.h>
#include "contact.h"

int isEqualContact(Contact a, Contact b);

void printContact(Contact ct);

void isEqualContactPtr(Contact* a, Contact* b);

void printContactPtr(Contact ct);



//isEqualContact() 함수는 같으면 1을 반환하고 그렇지 않으면 0을 반환하는 함수
int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;

	}
	return 0;

}

void printContact(Contact ct)
{
	printf("이름: %s\n", ct.name);
	printf("전번: %s\n", ct.phone);
	printf("성별: %s\n", ct.gender == MAN ? "남자" : "여자");
	printf("연도: %4d\n", ct.year);
}

void isEqualContactPtr(Contact * a, Contact * b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;

	}
	return 0;



}

void printContactPtr(Contact * ct)
{

	printf("이름: %s\n", ct->name);
	printf("전번: %s\n", ct->phone);
	printf("성별: %s\n", ct->gender == MAN ? "남자" : "여자");
	printf("연도: %4d\n",ct->year);


}