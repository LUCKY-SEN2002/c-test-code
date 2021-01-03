#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<math.h>
//#define num2 2;
//int a;
////int d;
////double  c;
//int main() {
	//int a=0;

	/*printf("----------这是一个十进制转化为二进制的转换器------------");
	printf("请输入您需要转化的数");
	scanf("%d", &a);
	if (a % 2 == 0) {
		c =(int ) ((a / 2)-0.5);
		printf("%d", &c);


	}*/
	/*else {

		a = a + 1;
	}
	printf("%d的余数为%d", a, c);

	while  (d > 0) {

	}
		*/
		/*int num;
		int a[16];
		int i = 1, j;
		scanf("% d", &num);
		for (j = 0; j < 16; j++) {
			i = num % num2;
			num = num / num2;
			a[j] = i;
			printf("该数的二进制为：");
		}
			for (j = 15; j >= 0;j--) {
				printf("%d", a[j]);
				if (j % 4 == 0)
					printf(" ");
				}

			return 0;*/
	
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	int  i = pow(2,a) + 1;//行列数
//	char d = '+';
//	
//
//
//	for (int b = 1; b <= i;  b++) {//行数开始循环 
//		for (int k = 1; k <= (i + 1) / 2; k++) {
//			printf(" ");
//
//		}
//		printf("%c\n", d);
//
//	}
//	return 0;
//}
	/*
	打印菱形
	
	*/
int main() {
	int line;//菱形总行数
	int column;//列数
	int i;//当前行
	int j; //当前列
	printf("请输入菱形的总行数（奇数）：");
		scanf("%d", &line);
	if (line % 2 == 0) {
		printf("请输入奇数，偶数行无法打印！");
		exit(1);

	}
	column = line;//行列相同
	for (i = 1; i <= line; i++) {

		if (i < (line + 1) / 2 + 1) {
			//上半部分（包括中间一行）
			for (j = 1; j <= column; j++) {
				//遍历上半部分所有列
				if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
					printf("*");

				}
				else
				{
					printf(" ");

				}


			}
		}
		else//下半部分
		{
			for (j = 1; j <= column; j++) {
				if ((column + 1) / 2 - (line - i)<=j&&j<=(column+1)/2+(line-i)) {
					printf("*");


				}
				else
				{
					printf(" ");

				}
		}

	
		}
		printf("\n");

	}


	return 0;



	}
	
	




