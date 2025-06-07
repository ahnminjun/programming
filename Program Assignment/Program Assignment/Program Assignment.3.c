#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void LOGIN();

int main(void)
{
	LOGIN();
	return 0;
}

void LOGIN()
{
	typedef struct
	{
		char ID[30];
		char PW[30];

	} LOGIN_PASSWORD ;

	LOGIN_PASSWORD LP[] =
	{
		{"guest","idontknow"}
	};

	int a;
	int b;

	printf("ID\n");
	scanf("%s", &a);
	printf("PW\n");
	scanf("%s", &b);

	if (a == LP.ID[1] && LP.PW[1])
	{
		printf("로그인 성공")
	}
	else
	{
		printf("로그인 실패")
	}
}