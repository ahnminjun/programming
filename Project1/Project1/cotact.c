#include <stdio.h>
#include <string.h>
#include "contact.h"

int isEqualContact(Contact a, Contact b);

void printContact(Contact ct);

void isEqualContactPtr(Contact* a, Contact* b);

void printContactPtr(Contact ct);



//isEqualContact() �Լ��� ������ 1�� ��ȯ�ϰ� �׷��� ������ 0�� ��ȯ�ϴ� �Լ�
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
	printf("�̸�: %s\n", ct.name);
	printf("����: %s\n", ct.phone);
	printf("����: %s\n", ct.gender == MAN ? "����" : "����");
	printf("����: %4d\n", ct.year);
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

	printf("�̸�: %s\n", ct->name);
	printf("����: %s\n", ct->phone);
	printf("����: %s\n", ct->gender == MAN ? "����" : "����");
	printf("����: %4d\n",ct->year);


}