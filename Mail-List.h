#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_SEX  5
#define MAX_ADDRESS 20
#define MAX_PEOPLE 50

//定义一个联系人的信息
typedef struct PeoInfor
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	char address[MAX_ADDRESS];
	int age;

}PeoInfor;

//定义一个结构体数组来存放联系人的信息
typedef struct Contact
{
	PeoInfor data[MAX_PEOPLE];
	int size;//存放已经有了多少个联系人
}Contact;

//枚举的方式简便看懂
enum
{
	Exit,
	Add,
	Del,
	Ser,
	Mod,
	Show,
};


//声明菜单
void meun();

//增加通讯录的联系人的函数  声明
void AddContact(Contact*);

//删除通讯录里面的信息
void DelContact(Contact*);

//查找通讯录里面的人
void SerContact(Contact*);

//修改通讯录里面的信息
void ModContact(Contact* p);

//显示通讯录里面的联系人    声明
void ShowContact(Contact*);