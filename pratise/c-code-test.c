#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<math.h>
//#define num2 2;
//int a;
////int d;
////double  c;
//int main() {
	//int a=0;

	/*printf("----------����һ��ʮ����ת��Ϊ�����Ƶ�ת����------------");
	printf("����������Ҫת������");
	scanf("%d", &a);
	if (a % 2 == 0) {
		c =(int ) ((a / 2)-0.5);
		printf("%d", &c);


	}*/
	/*else {

		a = a + 1;
	}
	printf("%d������Ϊ%d", a, c);

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
			printf("�����Ķ�����Ϊ��");
		}
			for (j = 15; j >= 0;j--) {
				printf("%d", a[j]);
				if (j % 4 == 0)
					printf(" ");
				}

			return 0;*/
	
//	printf("������һ������");
//	scanf("%d", &a);
//	int  i = pow(2,a) + 1;//������
//	char d = '+';
//	
//
//
//	for (int b = 1; b <= i;  b++) {//������ʼѭ�� 
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
	��ӡ����
	
	*/
int main() {
	int line;//����������
	int column;//����
	int i;//��ǰ��
	int j; //��ǰ��
	printf("���������ε�����������������");
		scanf("%d", &line);
	if (line % 2 == 0) {
		printf("������������ż�����޷���ӡ��");
		exit(1);

	}
	column = line;//������ͬ
	for (i = 1; i <= line; i++) {

		if (i < (line + 1) / 2 + 1) {
			//�ϰ벿�֣������м�һ�У�
			for (j = 1; j <= column; j++) {
				//�����ϰ벿��������
				if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
					printf("*");

				}
				else
				{
					printf(" ");

				}


			}
		}
		else//�°벿��
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
	
	




