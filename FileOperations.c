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


int main()
{
	//��Ҫ�����ļ�
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s", strerror(errno));
	}

	//��Ҫ��ȡ���ļ���ӡ����Ļ��
	printf("%c", fgetc(pfRead));//һ��ֻ��һ���ַ�
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));

	//�ر��ļ�
	fclose(pfRead);
	pfRead = NULL;


	return 0;
}