#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ļ�
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	//д���ļ�
//	fputc('L', pfWrite);
//	fputc('2', pfWrite);
//
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	//��Ҫ�����ļ�
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//
//	//��Ҫ��ȡ���ļ���ӡ����Ļ��
//	printf("%c", fgetc(pfRead));//һ��ֻ��һ���ַ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//
//
//	return 0;
//}


//
//int main()
//{
//	char buf[1024] = { 0 };
//	//��Ҫ���Ƶ��ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//
//	}
//	//�Ѷ�ȡ�������ݷŵ���������
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}
//


//int main()
//{
//	//��д����ʽ���ļ�
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//
//
//	//д���ļ�
//	fputs("liuqianwochaojiaini", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//int main()
//{
//	char buf[1024];
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}



//struct test
//{
//	int n;
//	float df;
//	char arr[10];
//
//};
//int main()
//{
//	struct test Con = {0};
//	//���ļ�
//	FILE* pf = fopen("text.txt", "r");
//	fscanf(pf, "%d %f %s", &(Con.n), &(Con.df), Con.arr);
//	printf("%d %f %s", Con.n, Con.df, Con.arr);
//
//
//	fclose(pf);
//	pf = NULL;
//
//
//
//	return 0;
////}
//
//
//struct S
//{
//	int n;
//	float lg;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 10,3.14,"liuqian" };
//	char buf[1024];
//	FILE* pf = fopen("test.txt", "w");
//
//	fprintf(pf, "%d %f %s", s.n, s.lg, s.arr);
//
//
//	return 0;
//}



struct S
{
	char name[10];
	int n;
	float lg;
};

int main()
{
	//struct S s = { "����",20,3.14 };
	struct S tmp;
	FILE* pf = fopen("test.txt", "rb");
	//fwrite(&s, sizeof(s), 1, pf);
	fread(&tmp, sizeof(tmp), 1, pf);
	printf("%s %d %f \n", tmp.name,tmp.n,tmp.lg);

	return 0;
}
