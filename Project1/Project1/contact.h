#ifndef _COTACT_H_123456789
#define _COTACT_H_123456789



#pragma once

enum gender { MAN, WOMAN }; 
typedef enum gender EGender; // 구조체 gender의 이름을 EGender로 정의

struct contact { 
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact Contact; // 구조체 contact의 이름을 Contact로 정의



int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
void isEqualContactPtr(Contact a, Contact b);
void printContact(Contact ct);



#endif
