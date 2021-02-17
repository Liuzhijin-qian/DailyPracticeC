#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_SEX  5
#define MAX_ADDRESS 20

//定义一个联系人的信息
typedef struct PeoInfor
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	char address[MAX_ADDRESS];
}PeoInfor;

//定义一个结构体数组来存放联系人的信息
typedef struct Contact
{
	PeoInfor data[50];
	int size;//存放已经有了多少个联系人
}Contact;


//声明菜单
void meun();