#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////�˵�
//void meun()
//{
//	printf("1. ���   2.��ʾ\n");
//}
//
//
//
////����һ����ϵ�˵Ļ�����Ϣ
//struct PeoInfor
//{
//	char name[20];
//	char address[20];
//	char tele[20];
//	char sex[5];
//	int age;
//};
////����һ���ṹ�����
//struct Contact
//{
//	struct PeoInfor* data;
//	int size;//��ŵ���ϵ�˵ĸ���
//	int Capacity;//Ĭ�ϵĿ��Դ�ŵ���ϵ�˵ĸ�����Ϊ3
//};
//
////��ʼ��ͨѶ¼
//void InitContact(struct Contact* p)
//{
//	p->data = (struct PeoInfor*)malloc(3 * sizeof(struct PeoInfor));
//	p->size = 0;
//	p->Capacity = 3;
//}
//
//void AddContact(struct Contact* p)
//{
//	if (p->size == p->Capacity)
//	{
//		//����
//		struct PeoInfor* ptr = (struct PeoInfor*)realloc(p->data,(p->Capacity + 2) * sizeof(struct PeoInfor));
//		if (ptr != NULL)
//		{
//			p->data = ptr;
//			p->Capacity += 2;
//			printf("���ݳɹ�,���ӵ�����Ϊ2\n");
//		}
//		
//	}
//	else
//	{
//		printf("������Ҫ���ӵ����֣�\n");
//		scanf("%s", p->data[p->size].name);
//		printf("������Ҫ���ӵĵ绰��\n");
//		scanf("%s", p->data[p->size].tele);
//		printf("������Ҫ���ӵ��Ա�\n");
//		scanf("%s", p->data[p->size].sex);
//		printf("������Ҫ���ӵ����䣺\n");
//		scanf("%d",&(p->data[p->size].age));
//		printf("������Ҫ���ӵĵ�ַ��\n");
//		scanf("%s", p->data[p->size].address);
//		p->size++;
//		printf("��ӳɹ�\n");
//
//	}
//
//}
//
//void ShowContact(struct Contact* p)
//{
//	
//	    int i = 0;
//		printf("����      �绰      �Ա�      ����      ��ַ\n");
//		
//		for (i = 0; i < p->size; i++)
//		{
//			printf("%s         %s         %s          %d        %s  \n",
//				p->data[i].name,
//				p->data[i].tele,
//				p->data[i].sex,
//				p->data[i].age,
//				p->data[i].address);
//		}
//
//}
//	
//	
//int main()
//{
//	int input = 0;
//	struct Contact Con;
//	//��ʼ��ͨѶ¼
//	InitContact(&Con);
//
//	do
//	{
//		meun();
//		printf("������Ҫ���еĲ���\n");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			AddContact(&Con);
//			break;
//		case 2:
//			ShowContact(&Con);
//			break;
//		default :
//			printf("�����������������\n");
//		}
//	}while(input);
//
//	
//	return 0;
//}