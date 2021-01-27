
#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <windows.h>
//
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

// int MAX(int a, int b) {
//	if (a > b) {
//
//		return a;
//		/*printf("�ϴ�ֵΪ��%d\n", a);*/
//	}
//	else
//	{
//		return b;
//		/*printf("�ϴ�ֵ�ǣ�%d\n", b);*/
//	}
//
//}
//
//int main() {
//	int num1=0;
//	int num2=0;
//
//	printf("Ոݔ��ɂ�����");//////������
//	scanf("%d%d\n", &num1, &num2);
//	int max = 0;
//	printf("%d%d\n", num1, num2);
//	max=MAX(num1,num2);
//	printf("max�飺%d\n", max);
//	return 0;

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

/*int function2(int a[], int b, int e)
{
	if (e - b <= 1) return abs(a[b] - a[e]) >= 3 ? a[b] : a[e];
	int l = 0, r = 0;
	l = function2(a, b, b + (e - b) / 2);
	if (l % 2 == 0)
		r = function2(a, b + (e - b) / 2 + 1, e);
	else
		return l;
	if (l | r)
		return l | r;
	else
		return r;
}

int main()
{
	int a[] = { 10,5,8,4,5,20,2,3 };
	cout << function2(a, 0, sizeof(a) / sizeof(1)) << endl;
	int b[] = { 3,5,8,4,8,30,2,3 };
	cout << function2(b, 0, sizeof(b) / sizeof(1)) << endl;
	return 0;
}*/
//����һ���������飬�����������ҳ���������������Ŀ��ֵ������
//������ĺ���twoSum ��Ҫ�������������ֵ��±꣨index1��index2������Ҫ���� index1 С��index2.��ע�⣺�±��Ǵ�1��ʼ��
//���������������ֻ����Ψһ��
//���磺
//����������Ϊ{ 20, 70, 110, 150 }, Ŀ��ֵΪ90
//��� index1 = 1, index2 = 2
//����
//����
//[3, 2, 4], 6
//����ֵ
//����
//[2, 3]
//int twoSum(int index1, int index2) {
//	return index1;
//	return index2;
//
//
//
//
//}
//
//int main() {
//	int* p;
//	int n, i = 0;
//	scanf("%d", &n);
//	printf("������%d������\n", n);
//	p = (int*)malloc(n * sizeof(int));
//	for (; i < n; i++) {
//		scanf("%d", p + i);
//	}
//	printf("����������У�");
//	for (i =0 ; i < n; i++)
//		printf("%d", *(p + i));
//
//
//
//
//	puts("");
//
//	return 0;
//
//}
//��Ŀ����
//����һ���ַ�����������һ�������ν�������
//�������� :
//����ֻ��һ�У�һ���ַ���
//������� :
//���ַ����ɵ������ν�������
//ʾ��1
//����
//����
//1
//���
//����
/*   1
//  1 1
// 1 1 1
//1 1 1 1
/1 1 1 1 1*/
//#include <windows.h>
//int main() {
//
//	char c;
//	printf("������һ����Ҫ��ӡ���ַ���");
//	scanf("%c", &c);
//	int a = 5;//��������
//	int b = 9;//��������
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= 5 - i; j++) {
//
//			printf("0");
//			Sleep(1000);
//
//
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//��ӡ����������
//#include <stdio.h>
//#include<windows.h>
//int i;//��������
//int j;//����
//int k;
//int main(){
//	printf("��������Ҫ��ӡ��������������");
//	scanf("%d", &k);//ɨ������
//	while (k % 2 == 0) {
//		printf("��������ȷ��������������");
//		scanf("%d", &k);//ɨ������
//
//	}
//	i = k;
//	j = ((i + 1) / 2);
//	for (int a = 1; a <= (i + 1) / 2;a++) {//��ӡ�ϰ벿��
//		for (int b = 1; b <= ((i + 1) / 2) + a - 1; b++) {
//
//			if (b <j + 1 - a) {
//
//				printf(" ");
//			}
//			else {
//					printf("*");
//					Sleep(10);
//				}
//
//
//
//
//		}
//		printf("\n");
//
//	}
//	for (int d = j + 1; d <= k;d++) {//��ӡ�°벿��
//		for (int c = 1; c <= (k-(d - j)); c++) {
//			if (c <= d - j) {
//				printf(" ");
//
//			}
//			else
//			{
//				printf("*");
//				Sleep(10);
//			}
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//
//
//
//
//}

//������ӡ
//#include <stdio.h>
//#define ABS(x) ((x) > 0 ? (x) : -(x))
//
//int main()
//{
//	double a = 8, b = 10; /*���ο��Ⱥ͸߶ȵ�һ��*/
//	int i, j;
//	for (i = -a; i <= a; ++i) {
//		for (j = -b; j <= b; ++j)
//			putchar((ABS(i) / a + ABS(j) / b > 1) ? ' ' : '*');
//		putchar('\n');
//	}
//	return 0;
//}
//ð������
//#pragma warning(disable:4996)
//int arr[];
//int i;
//
//int main() {
//	printf("��������Ҫ����ĸ�����");
//	scanf_s("%d", &i);
//	printf("��������Ҫ���������");
//
//	for (int a = 1; a <= i;a++) {
//
//		scanf_s("%d", &arr[i]);
//
//	}
//	int b = 2;
//
//	return 0;
//}
//
//
//
//
//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>

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

// int MAX(int a, int b) {
//	if (a > b) {
//
//		return a;
//		/*printf("�ϴ�ֵΪ��%d\n", a);*/
//	}
//	else
//	{
//		return b;
//		/*printf("�ϴ�ֵ�ǣ�%d\n", b);*/
//	}
//
//}
//
//int main() {
//	int num1=0;
//	int num2=0;
//
//	printf("Ոݔ��ɂ�����");//////������
//	scanf("%d%d\n", &num1, &num2);
//	int max = 0;
//	printf("%d%d\n", num1, num2);
//	max=MAX(num1,num2);
//	printf("max�飺%d\n", max);
//	return 0;

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

/*int function2(int a[], int b, int e)
{
	if (e - b <= 1) return abs(a[b] - a[e]) >= 3 ? a[b] : a[e];
	int l = 0, r = 0;
	l = function2(a, b, b + (e - b) / 2);
	if (l % 2 == 0)
		r = function2(a, b + (e - b) / 2 + 1, e);
	else
		return l;
	if (l | r)
		return l | r;
	else
		return r;
}

int main()
{
	int a[] = { 10,5,8,4,5,20,2,3 };
	cout << function2(a, 0, sizeof(a) / sizeof(1)) << endl;
	int b[] = { 3,5,8,4,8,30,2,3 };
	cout << function2(b, 0, sizeof(b) / sizeof(1)) << endl;
	return 0;
}*/
//����һ���������飬�����������ҳ���������������Ŀ��ֵ������
//������ĺ���twoSum ��Ҫ�������������ֵ��±꣨index1��index2������Ҫ���� index1 С��index2.��ע�⣺�±��Ǵ�1��ʼ��
//���������������ֻ����Ψһ��
//���磺
//����������Ϊ{ 20, 70, 110, 150 }, Ŀ��ֵΪ90
//��� index1 = 1, index2 = 2
//����
//����
//[3, 2, 4], 6
//����ֵ
//����
//[2, 3]
//int twoSum(int index1, int index2) {
//	return index1;
//	return index2;
//
//
//
//
//}
//
//int main() {
//	int* p;
//	int n, i = 0;
//	scanf("%d", &n);
//	printf("������%d������\n", n);
//	p = (int*)malloc(n * sizeof(int));
//	for (; i < n; i++) {
//		scanf("%d", p + i);
//	}
//	printf("����������У�");
//	for (i =0 ; i < n; i++)
//		printf("%d", *(p + i));
//
//
//
//
//	puts("");
//
//	return 0;
//
//}
//��Ŀ����
//����һ���ַ�����������һ�������ν�������
//�������� :
//����ֻ��һ�У�һ���ַ���
//������� :
//���ַ����ɵ������ν�������
//ʾ��1
//����
//����
//1
//���
//����
/*   1
//  1 1
// 1 1 1
//1 1 1 1
/1 1 1 1 1*/
//int main() {
//
//	char c;
//	scanf("%c", &c);
//	int a = 5;//��������
//	int b = 9;//��������
//	for (int i = 1; i <= a; i++) {
//		if (i % 2 != 0) {
//			for (int j = 1; j <= b; j++) {
//
//			}
//		}
//		else {
//			for (int j = 1; j <= b; j++) {
//
//
//			}
//
//		}
//
//	}
//
//}
//��ӡ����������
//#include <stdio.h>
//#include<windows.h>
//int i;//��������
//int j;//����
//int k;
//int main() {
//	printf("��������Ҫ��ӡ��������������");
//	scanf("%d", &k);//ɨ������
//	while (k % 2 == 0) {
//		printf("��������ȷ��������������");
//		scanf("%d", &k);//ɨ������
//
//	}
//	i = k;
//	j = ((i + 1) / 2);
//	for (int a = 1; a <= (i + 1) / 2; a++) {//��ӡ�ϰ벿��
//		for (int b = 1; b <= ((i + 1) / 2) + a - 1; b++) {
//
//			if (b < j + 1 - a) {
//
//				printf(" ");
//			}
//			else {
//				printf("*");
//				Sleep(10);
//			}
//
//
//
//
//		}
//		printf("\n");
//
//	}
//	for (int d = j + 1; d <= k; d++) {//��ӡ�°벿��
//		for (int c = 1; c <= (k - (d - j)); c++) {
//			if (c <= d - j) {
//				printf(" ");
//
//			}
//			else
//			{
//				printf("*");
//				Sleep(10);
//			}
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//
//
//
//
//}
//������ӡ
//#include <stdio.h>
//#define ABS(x) ((x) > 0 ? (x) : -(x))
//
//int main()
//{
//	double a = 8, b = 10; /*���ο��Ⱥ͸߶ȵ�һ��*/
//	int i, j;
//	for (i = -a; i <= a; ++i) {
//		for (j = -b; j <= b; ++j)
//			putchar((ABS(i) / a + ABS(j) / b > 1) ? ' ' : '*');
//		putchar('\n');
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main() {
//
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//
//
//}
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//
//	char password[20] = { 0 };
//	scanf("%s", &password);
//	printf("��ȷ������Y/N");
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//}

//数组查询数组查询
// #include <stdio.h>
// int main()
// {//效率低
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int i = 0;
// 	int k;
// 	printf("请输入你需要查找的数\n");
// 	scanf("%d", &k);

// 	int sz = sizeof(arr) / sizeof(arr[0]);

// 	for (i = 0; i < sz; i++)
// 	{
// 		if (k == arr[i])

// 		{
// 			printf("找到的，%d的下标是%d,为arr[%d]", k, i, i);
// 			break;
// 		}

// 	}
// 	if(sz==i){
// 		printf("查询完毕，该数组中没有该值\n");

// 	}

// 	return 0;
// }

//二分查找法
// #include <stdio.h>
// int main()
// {
// 	int k = 11;

// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10}; //0 1 2 3 4 5 6 7 8 下标
// 	int sz = sizeof(arr) / sizeof(arr[0]);	 //1 2 3 4 5 6 7 8 9
// 	int left = 0;
// 	int right = sz - 1;

// 	while (left<=right)
// 	{
// 	int mid = (left + right) / 2;
// 		if (arr[mid] > k)
// 		{
// 			right = mid - 1;
// 		}
// 		else if (arr[mid] < k)
// 		{
// 			left = mid + 1;
// 		}
// 		else
// 		{
// 			printf("找到了，这个数字的下标是%d\n",mid);
//             break;
// 		}
// 	}
// 	if (left>right)

// 	{
// 	printf("找不到！该数可能不存在");
// 	}

// 	return 0;
// }
//辗转相除法

// #include<stdio.h>
// int main()
// {
// int m=24;
// int n=18;
// int r=0;
// scanf("%d%d",&m,&n);
// while(r=m%n){

// 	m=n;
// 	n=r;

// }
// printf("%d\n",n);
// return 0;

// }

//素数  最优解  只查奇数 查一般
// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	int k = 0;
// 	int count = 0;
// 	printf("请输入需要查找的范围");
// 	scanf("%d", &k);

// 	for (int a = 1; a <= k; a+=2)
// 	{
// 		int b=0;

// 		for ( b = 2; b <= sqrt(a) ; b++)
// 		{
// 			if (a % b == 0)
// 			{
// 				break;
// 			}

// 		}
// 		if(b>sqrt(a))
// 			{	count++;
// 				printf("%d  ", a);

// 			}
// 	}
// 	printf("\ncount=%d\n",count);
// 	return 0;

// }

// #include <stdio.h>
// int main ()
// {
// 	int arr[]={1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
// 	int max=arr[0];
// 	int sz=sizeof(arr)/sizeof(arr[0]);
// 	for(int a=0;a<sz;a++)
// 	{
// 		if (arr[a]>max)
// 		{
// 			max=arr[a];

// 		}

// 	}
// printf("max=%d\n",max);
// 		return 0;

// }

//打印9*9乘法表
#include <stdio.h>
int main()
{
	int a = 1; //定义行数
	int b = 1; //定义列数
	printf("*****************************九九乘法表*************************\n");
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <=a; b++)
		{
			int c = a * b;
			printf("%d*%d=%d ", b, a, c);

		}
		printf("\n");
	}
}