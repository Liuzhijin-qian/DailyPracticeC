#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_SEX  5
#define MAX_ADDRESS 20

//����һ����ϵ�˵���Ϣ
typedef struct PeoInfor
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	char address[MAX_ADDRESS];
}PeoInfor;

//����һ���ṹ�������������ϵ�˵���Ϣ
typedef struct Contact
{
	PeoInfor data[50];
	int size;//����Ѿ����˶��ٸ���ϵ��
}Contact;


//�����˵�
void meun();