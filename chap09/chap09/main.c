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

	printf("s1�� ����: %d\n", strlen(s1));

	printf("s2�� ����: %d\n", strlen("bye bye"));

	printf("s3�� ����: %d\n", strlen(s3));

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

	printf("2���� ���ڿ�");
	scanf("%s %s", &str1, &str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1); // str1���� temp�� �����Ѵ�
	strcpy(str1, str2); // str2���� str1���� �����Ѵ�
	strcpy(str2, temp); // temp���� str2�� �����Ѵ�
	                    // B <- A 

	printf("str1 = %s, str2 = %s\n", str1, str2); //���������� �� ���� �ٲ�� �ȴ�
	return 0;
}
















