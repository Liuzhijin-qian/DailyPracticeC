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


int main()
{
	//打开要读的文件
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s", strerror(errno));
	}

	//把要读取的文件打印到屏幕上
	printf("%c", fgetc(pfRead));//一次只读一个字符
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));

	//关闭文件
	fclose(pfRead);
	pfRead = NULL;


	return 0;
}