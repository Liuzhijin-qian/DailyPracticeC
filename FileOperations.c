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
//}