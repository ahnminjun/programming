#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void text(void);

void test(void);


int main()
{
	text();

	test();

	return 0;
}

void text(void)
{
	printf("hello world!\n");


	char s1[] = "Hello world!";

	char s3[] = "";

	printf("s1의 길이: %d\n", strlen(s1));

	printf("s2의 길이: %d\n", strlen("bye bye"));

	printf("s3의 길이: %d\n", strlen(s3));

	int len = strlen(s1);

	if (len > 0)
		s1[len - 5] = '\0';

	printf("%s", s1);

	return 0;

}

#define SIZE 32

void test()
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	char temp[SIZE];

	printf("2개의 문자열");
	scanf("%s %s", &str1, &str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1); // str1값을 temp에 대입한다
	strcpy(str1, str2); // str2값을 str1값에 대입한다
	strcpy(str2, temp); // temp값을 str2에 대입한다
	                    // B <- A 

	printf("str1 = %s, str2 = %s\n", str1, str2); //최종적으로 두 값이 바뀌게 된다
	return 0;
}
















