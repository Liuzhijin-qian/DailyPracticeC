#include "Mail-List.h"

int main()
{
	//选择的功能
	int input = 0;
	//初始化通讯录
	Contact Con = { 0 };
	

	do
	{
		meun();
		printf("请输入想要的操作->\n");
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
			printf("退出成功\n");
			break;
		 default :
			 printf("输入错误，请重新输入\n");
			 break;
		}
		



	}while(input);


	return 0;
}