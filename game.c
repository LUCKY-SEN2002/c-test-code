#include "game.h"
#define _CRT_SECURE_NO_WARNINGS


void Initbard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
			

		}
		printf("\n");

		
		if (i < row - 1)
		{
			/*printf("---|---|---\n");*/
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");

				}
				

			}
			printf("\n");
		
		} 

		


	}


}

void  playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家走：-->>\n");
	while (1)
	{


		printf("请输入要下的坐标：\n");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] ==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else if(board[x - 1][y - 1] != ' ')
			{
				printf("该坐标已经被占用！\n");

			}
		}
		else
		{

			printf("坐标非法！请重新输入！\n");

		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋--->>\n");

	while (1) 
	{
		
		int count = 0;

		for (int i = 0; i < row; i++)
		{
			for (int j=0;j<col;j++)
				if (board[i][j] == ' ')
				{
					count++;

				}
		}
		if(count>1){
			srand((int unsigned)time(NULL));
			int x = 0;
			int y = 0;
			int count = 0;

			x = rand() % 3 + 1;
			y = rand() % 3 + 1;
			if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '+';


				break;


			}

		}
		else
		{
			printf("棋盘已满！\n");
			break;

		}
	}
		



	}
int judge(char board[ROW][COL], int row, int col)
{
	//第一种情况
	int i = 0;
	int j = 0;
	int count = 0;

	for (i = 0; i < ROW; i++)
	{

		if (board[i][0] == board[i][1]&& board[i][1]== board[i][2] && board[i][2]== '*')
		{
			return 1;
			break;

		}
		else if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == '+')
		{
			return 0;

			break;

		}

	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '*')
		{
			return 1;
			break;
		}
		else if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '+')
		{

			return 0;
			break;
		}
	}
	
	i = 0;
	j = 0;


		if (board[i][j] == board[i + 1][j + 1]&&board[i+1][j+1] == board[i + 2][j + 2]&&board[i+2][j+2] == '*')
		{
			return 1;
			
		}
		 if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == '+')
		{
			return 0;
			

		}
		if (board[i][j+2] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j] && board[i + 2][j] == '*')
		{
			return 1;
			
		}
		 if (board[i][j + 2] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j] && board[i + 2][j] == '+')
		{
			return 0;
			

		}

	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				count++;


			}
		}
	}
	if (count == 0)
	{
		return 2;
	}
}
	


	

