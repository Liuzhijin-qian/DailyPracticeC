#include "Mail-List.h"

//�˵���ʵ��
void meun()
{
	printf("********************\n");
	printf("*1.Add        2.Del*\n");
	printf("*3.Ser        4.Mod*\n");
	printf("*5.Show      0.Exit*\n");
	printf("********************\n");

}
//����ͨѶ¼�������ϵ��   ʵ��

void AddContact(struct Contact* p)
{
	if (p->size == MAX_PEOPLE)
	{
		printf("�ռ��������޷��������\n");
	}
	else
	{

		printf("������Ҫ��ӵ�����\n");
		(void)scanf("%s", p->data[p->size].name);
		printf("������Ҫ��ӵ�����\n");
		(void)scanf("%d", &(p->data[p->size].age));
		printf("������Ҫ��ӵĵ绰\n");
		(void)scanf("%s", p->data[p->size].tele);
		printf("������Ҫ��ӵ��Ա�\n");
		(void)scanf("%s", p->data[p->size].sex);
		printf("������Ҫ��ӵĵ�ַ\n");
		(void)scanf("%s", p->data[p->size].address);
		p->size++;
		printf("��ӳɹ�\n");

	}


}

//ɾ����ϵ��      ʵ��
void DelContact(Contact* p)
{
	char name[MAX_NAME];
	printf("������Ҫɾ��������->\n");
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
		printf("ͨѶ¼��û�д���\n");
	}
	else
	{
		int j = 0;
		for (j = i; j < p->size-1; j++)
		{
			p->data[j] = p->data[j + 1];
		}
		p->size--;
		printf("ɾ���ɹ�\n");
	}
	}

void SerContact(Contact* p)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ�����->\n");
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
		printf("ͨѶ¼��û�д���\n");
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
	
//������ϵ��
void ModContact(Contact* p)
{
	char name[MAX_NAME];
	printf("������Ҫ����������->\n");
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
		printf("ͨѶ¼��û�д���\n");
	}
	else
	{
		printf("������Ҫ����������\n");
		(void)scanf("%s", p->data[p->size].name);
		printf("������Ҫ����������\n");
		(void)scanf("%d", &(p->data[p->size].age));
		printf("������Ҫ����������\n");
		(void)scanf("%s", p->data[p->size].tele);
		printf("������Ҫ����������\n");
		(void)scanf("%s", p->data[p->size].sex);
		printf("������Ҫ����������\n");
		(void)scanf("%s", p->data[p->size].address);
		printf("�����ɹ�\n");
	}
}

//��ʾ��ϵ�˵ĺ���   ʵ��
void ShowContact(Contact* p)
{
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ӡ\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","����","����","�绰","�Ա�","��ַ");
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