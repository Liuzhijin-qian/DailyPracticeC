#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//菜单
void meun()
{
	printf("1. 添加 2.显示\n");
}



//创建一个联系人的基本信息
struct PeoInfor
{
	char name[20];
	char address[20];
	char tele[20];
	char sex[5];
	int age;
};
//创建一个结构体变量
struct Contact
{
	struct PeoInfor* data;
	int size;//存放的联系人的个数
	int Capacity;//默认的可以存放的联系人的个数，为3
};
//初始化通讯录
void CheckCapacity(struct Contact* p)
{
	p->data = (struct PeoInfor*)malloc(3 * sizeof(struct PeoInfor));
	p->size = -1;
	p->Capacity = 3;
}

void AddContact(struct Contact* p)
{
	if (p->size == p->Capacity)
	{
		//增容
		struct PeoInfor* ptr = (struct PeoInfor*)realloc(p->data,(p->Capacity + 2) * sizeof(struct PeoInfor));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->Capacity += 2;
			printf("增容成功,增加的容量为2\n");
		}
		
	}
	else
	{
		printf("请输入要增加的名字：\n");
		scanf("%s", p->data[p->size].name);
		printf("请输入要增加的电话：\n");
		scanf("%s", p->data[p->size].tele);
		printf("请输入要增加的性别：\n");
		scanf("%s", p->data[p->size].sex);
		printf("请输入要增加的年龄：\n");
		scanf("%d",&(p->data[p->size].age));
		printf("请输入要增加的地址：\n");
		scanf("%s", p->data[p->size].address);
		p->size += 1;
		printf("添加成功\n");

	}

}

void ShowContact(struct Contact* p)
{
	if (p->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("名字      电话      性别      年龄      地址\n");
		printf("%s        %s        %s        %d        %s  \n",
			p->data[p->size].name,
			p->data[p->size].tele,
			p->data[p->size].sex,
			p->data[p->size].age,
			p->data[p->size].address);
	}

}
	
	
int main()
{
	struct Contact Con;
	CheckCapacity(&Con);
	int input = 0;
	do
	{
		meun();
		printf("请输入要进行的操作\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			AddContact(&Con);
			break;
		case 2:
			ShowContact(&Con);
			break;
		default :
			printf("输入错误，请重新输入\n");
		}
	}while(input);

	return 0;
}