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
//
//int main() {
//	char a[] = "abc";//其实该字符窜已经包含\0在里面。
//	char b[] = { 'a','b','c','\0' };//加入0表示，终止字符串
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0;
//
//}

 int MAX(int a, int b) {
	if (a > b) {
		
		return a;
		/*printf("较大值为：%d\n", a);*/
	}
	else
	{
		return b;
		/*printf("较大值是：%d\n", b);*/
	}
	
}

int main() {
	int num1=0;
	int num2=0;

	printf("請輸入兩個數！");
	scanf("%d%d\n", &num1, &num2);
	int max = 0;
	printf("%d%d\n", num1, num2);
	max=MAX(num1,num2);
	printf("max為：%d\n", max);
	return 0;


	/*int num1 = 10;
	int  num2 = 20;
	if (num1 > num2) {
		printf("较大值为：%d\n", num1);

	}
	else
	{
		printf("较大值是：%d\n", num2);

	}
*/


}


	




