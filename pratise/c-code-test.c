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
//
//int main() {
//	char a[] = "abc";//��ʵ���ַ����Ѿ�����\0�����档
//	char b[] = { 'a','b','c','\0' };//����0��ʾ����ֹ�ַ���
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0;
//
//}

 int MAX(int a, int b) {
	if (a > b) {
		
		return a;
		/*printf("�ϴ�ֵΪ��%d\n", a);*/
	}
	else
	{
		return b;
		/*printf("�ϴ�ֵ�ǣ�%d\n", b);*/
	}
	
}

int main() {
	int num1=0;
	int num2=0;

	printf("Ոݔ��ɂ�����");
	scanf("%d%d\n", &num1, &num2);
	int max = 0;
	printf("%d%d\n", num1, num2);
	max=MAX(num1,num2);
	printf("max�飺%d\n", max);
	return 0;


	/*int num1 = 10;
	int  num2 = 20;
	if (num1 > num2) {
		printf("�ϴ�ֵΪ��%d\n", num1);

	}
	else
	{
		printf("�ϴ�ֵ�ǣ�%d\n", num2);

	}
*/


}


	




