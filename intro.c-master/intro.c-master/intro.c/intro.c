#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void introMe(void);




int main()
{
	introMe();

	return 0;
}

void introMe()
{
	char name[64]; //이름을 저장하는 변수
	int age; //나이를 저장하는 변수
	char hello[256]; //인사말을 저장하는 변수

	// 1.이름,나이, 인사말을 입력받는다.
	printf("이름 나이 인사말을 입력해주세요: \n");
	scanf("%s %d %s", name, &age, hello);

	//2.이름,나이,인사말을 출력한다.
	printf("이름: %s 나이: %d \n 인사말: %s",
		name, age, hello);

	return 0;
}


