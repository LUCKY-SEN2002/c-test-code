//����������
#include"game.h"
void game()
{
	//�������ڴ��������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ǿո�
	///��ʼ������
	Initbard(board, ROW, COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	while (1)
	{
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		 judge(board, ROW, COL);
		int a=judge(board, ROW, COL);
		if (a == 1)
		{
			printf("���Ӯ�ˣ�\n");
			break;
		
		}
		else if(a==0)
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}//w�������
		else if(a==2)
		{
			printf("ƽ�֣�\n");
			break;
		}
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		judge(board, ROW, COL);
		int b = judge(board, ROW, COL);
		if (b== 1)
		{
			printf("���Ӯ�ˣ�\n");
			break;

		}
		else if (b == 0)
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}//w�������
		else if(b==2)
		{
			printf("ƽ�֣�\n");
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
		

		//��ҳ���
	

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