#ifndef _COTACT_H_123456789
#define _COTACT_H_123456789



#pragma once

enum gender { MAN, WOMAN }; 
typedef enum gender EGender; // ����ü gender�� �̸��� EGender�� ����

struct contact { 
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact Contact; // ����ü contact�� �̸��� Contact�� ����

extern struct contact con;      
extern struct contact* ptr;

int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
void isEqualContactPtr(Contact a, Contact b);
void printContact(Contact ct);



#endif