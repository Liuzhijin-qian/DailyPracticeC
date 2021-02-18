#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_SEX  5
#define MAX_ADDRESS 20
#define MAX_PEOPLE 50

//����һ����ϵ�˵���Ϣ
typedef struct PeoInfor
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	char address[MAX_ADDRESS];
	int age;

}PeoInfor;

//����һ���ṹ�������������ϵ�˵���Ϣ
typedef struct Contact
{
	PeoInfor data[MAX_PEOPLE];
	int size;//����Ѿ����˶��ٸ���ϵ��
}Contact;

//ö�ٵķ�ʽ��㿴��
enum
{
	Exit,
	Add,
	Del,
	Ser,
	Mod,
	Show,
};


//�����˵�
void meun();

//����ͨѶ¼����ϵ�˵ĺ���  ����
void AddContact(Contact*);

//ɾ��ͨѶ¼�������Ϣ
void DelContact(Contact*);

//����ͨѶ¼�������
void SerContact(Contact*);

//�޸�ͨѶ¼�������Ϣ
void ModContact(Contact* p);

//��ʾͨѶ¼�������ϵ��    ����
void ShowContact(Contact*);