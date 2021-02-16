#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//打开文件
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	//写入文件
//	fputc('L', pfWrite);
//	fputc('2', pfWrite);
//
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	//打开要读的文件
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//
//	//把要读取的文件打印到屏幕上
//	printf("%c", fgetc(pfRead));//一次只读一个字符
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//关闭文件
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
//	//打开要复制的文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//
//	}
//	//把读取到的数据放到数组里面
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}
//


//int main()
//{
//	//以写的形式打开文件
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//
//
//	//写入文件
//	fputs("liuqianwochaojiaini", pf);
//
//	//关闭文件
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
//	//打开文件
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