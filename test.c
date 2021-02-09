//测试三子棋
#include"game.h"
void game()
{
	//数组用于存放棋盘信息
	char board[ROW][COL] = { 0 };//全部是空格
	///初始化函数
	Initbard(board, ROW, COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	while (1)
	{
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		 judge(board, ROW, COL);
		int a=judge(board, ROW, COL);
		if (a == 1)
		{
			printf("玩家赢了！\n");
			break;
		
		}
		else if(a==0)
		{
			printf("电脑赢了！\n");
			break;
		}//w玩家下棋
		else if(a==2)
		{
			printf("平局！\n");
			break;
		}
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		judge(board, ROW, COL);
		int b = judge(board, ROW, COL);
		if (b== 1)
		{
			printf("玩家赢了！\n");
			break;

		}
		else if (b == 0)
		{
			printf("电脑赢了！\n");
			break;
		}//w玩家下棋
		else if(b==2)
		{
			printf("平局！\n");
			break;
		}
	}
	




}
void menu()
{


	int choice = 0;
again:
	
	printf("****************THREE IN A ROW************\n");
	printf("********1.GAME START---2.GAME END*****\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("GAME START!\n");
		game();
		goto again;
		

		//玩家出棋
	

	case 2:
		printf("GAME HAS BEEN END!\n");
		break;
	default:
		printf("WRONG INPUT !PLEASE CHOICE AGAIN!\n");
		goto again;

	}

}

int main()
{
	//test();

		menu();
	
	return 0;

}