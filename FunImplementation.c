#include "Mail-List.h"

//菜单的实现
void meun()
{
	printf("********************\n");
	printf("*1.Add        2.Del*\n");
	printf("*3.Ser        4.Mod*\n");
	printf("*5.Show      0.Exit*\n");
	printf("********************\n");

}
//增加通讯录里面的联系人   实现

void AddContact(struct Contact* p)
{
	if (p->size == MAX_PEOPLE)
	{
		printf("空间已满，无法继续添加\n");
	}
	else
	{

		printf("请输入要添加的名字\n");
		(void)scanf("%s", p->data[p->size].name);
		printf("请输入要添加的年龄\n");
		(void)scanf("%d", &(p->data[p->size].age));
		printf("请输入要添加的电话\n");
		(void)scanf("%s", p->data[p->size].tele);
		printf("请输入要添加的性别\n");
		(void)scanf("%s", p->data[p->size].sex);
		printf("请输入要添加的地址\n");
		(void)scanf("%s", p->data[p->size].address);
		p->size++;
		printf("添加成功\n");

	}


}

//删除联系人      实现
void DelContact(Contact* p)
{
	char name[MAX_NAME];
	printf("请输入要删除的名字->\n");
	(void)scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			break;
		}
	}

	if (i == p->size)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		int j = 0;
		for (j = i; j < p->size-1; j++)
		{
			p->data[j] = p->data[j + 1];
		}
		p->size--;
		printf("删除成功\n");
	}
	}

void SerContact(Contact* p)
{
	char name[MAX_NAME];
	printf("请输入要查找的名字->\n");
	(void)scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			break;
		}
	}

	if (i == p->size)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\n",
			p->data[i].name,
			p->data[i].age,
			p->data[i].tele,
			p->data[i].sex,
			p->data[i].address);
	}

}
	
//更正联系人
void ModContact(Contact* p)
{
	char name[MAX_NAME];
	printf("请输入要更正的名字->\n");
	(void)scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			break;
		}
	}

	if (i == p->size)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		printf("请输入要更正的名字\n");
		(void)scanf("%s", p->data[p->size].name);
		printf("请输入要更正的名字\n");
		(void)scanf("%d", &(p->data[p->size].age));
		printf("请输入要更正的名字\n");
		(void)scanf("%s", p->data[p->size].tele);
		printf("请输入要更正的名字\n");
		(void)scanf("%s", p->data[p->size].sex);
		printf("请输入要更正的名字\n");
		(void)scanf("%s", p->data[p->size].address);
		printf("更正成功\n");
	}
}

//显示联系人的函数   实现
void ShowContact(Contact* p)
{
	if (p->size == 0)
	{
		printf("通讯录为空，无法打印\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","名字","年龄","电话","性别","地址");
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\n",
		        p->data[i].name,
				p->data[i].age, 
				p->data[i].tele, 
				p->data[i].sex, 
				p->data[i].address);
		}
	}
}