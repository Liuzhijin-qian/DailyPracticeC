#include "Mail-List.h"

int main()
{
	//ѡ��Ĺ���
	int input = 0;
	//��ʼ��ͨѶ¼
	Contact Con = { 0 };
	

	do
	{
		meun();
		printf("��������Ҫ�Ĳ���->\n");
		(void)scanf("%d", &input);
		switch (input)
		{

		 case Add:
			AddContact(&Con);
			break;
		 case Del:
			DelContact(&Con);
			break;
		 case Ser:
			SerContact(&Con);
			break;
		 case Mod:
			ModContact(&Con);
			break;
		 case Show:
			ShowContact(&Con);
			break;
		 case Exit:
			printf("�˳��ɹ�\n");
			break;
		 default :
			 printf("�����������������\n");
			 break;
		}
		



	}while(input);


	return 0;
}