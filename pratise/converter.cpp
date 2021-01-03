#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<string>
#include<set>
#include<list>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<bitset>
#include<sstream>
#include<iostream>

using namespace std;
#define Max 100
//����Ȩֵ

int power(int R, int turn)
{
	int ans = 1;
	while (turn--)
	{
		ans = ans * R;
	}
	return ans;
}
//**************************************������������**********************************//
//�������תʮ����(All Radix to Int) ��������������ַ��� ����R ���ã����ð�Ȩչ���Ӻͣ�����ʮ����
long int Atoi(string& S, int R)
{
	long int ans = 0;
	for (int i = 0; i<S.size(); i++)//��Ȩչ��
	{
		ans += (S[i] - '0') * power(R, S.size() - i - 1);
	}
	/* ���ϴ��� ����⣨���˽⣬������ʮ������ʱt����Ϊf����ôf-'a'=5,�ټ�10����15�ˣ�
	int ans=0;
	for (int i = 0;i<s.size();i++)
	{
		char t = s[i];
		if (t >= '0'&&t <= '9') ans = ans*radix + t - '0';
		else ans = ans*radix + t - 'a' + 10;
	}*/
	return ans;
}
//ʮ����ת������ƣ�Int to All Radix��������ʮ������Num,����R ���ã����ó����������������������������������Ҫת���Ľ�����
string Itoa(int Num, int R)
{
	string remain = "";
	int temp;
	do {
		temp = Num % R;//ȡ��
		Num /= R;
		if (temp >= 10)
			remain += temp - 10 + 'A';//�������Ϊ���ڻ�������10�Ľ��� ���磬ʮ������
		else remain += temp + '0';
	} while (Num);
	reverse(remain.begin(), remain.end());//����
	return remain;
}
//**************************************����ʵ�ֺ���**********************************//
//�˵�
void menu()
{
	cout << "************1.ʮ����ת������ƣ�����������       2.�������תΪʮ���ƣ���Ȩչ����****" << endl;
	cout << "************3.ʮ����ָ����ʽ����������ˡ�ʮ��)  4.������****************************" << endl;
	cout << "************5.�˳�" << endl;
}
void menu1()
{
	cout << "************1.ʮ����ת������         2.ʮ����ת�˽���****" << endl;
	cout << "************3.ʮ����תʮ������       4.�˳�**************" << endl;
}
void menu2()
{
	cout << "************1.ʮ����ת�˽���         2.ʮ����תʮ������**************" << endl;
	cout << "************3.�˽���תʮ����         4.ʮ������תʮ����**************" << endl;
	cout << "************5.�˳�" << endl;
}
//ʮ����ת������� ���ú���Itoa,�Դ���itoa
void ToAll()
{
	int num, R; char str[Max];
	cout << "���������ͽ���:" << endl;
	cin >> num >> R;
	cout << num << "ת��Ϊ" << R << "����Ϊ��" << Itoa(num, R) << endl;
	cout << "����itoa����:" << _itoa(num, str, R) << endl;
}
//�������תʮ���ƺ��� ����Atoi������strtol����
void ToDecimal(string& S)
{
	int R;
	cout << "���������ͽ���:" << endl;
	cin >> S >> R;
	cout << S << "ת��Ϊʮ����Ϊ��" << Atoi(S, R) << endl;
	//����strtol���� long int strtol(const char *nptr,char **endptr,int base)
	//�������ַ���,�Ƿ��ַ�ָ�룬�ַ����еĽ���
	char nptr[Max], * stop;
	strcpy(nptr, S.c_str());//string����ת��Ϊchar
	cout << S << "ת��Ϊʮ����Ϊ������strtol��������" << strtol(nptr, &stop, R) << endl;
}
//���ã�����std��hex dec �Լ� bitset��c���Ե�%o,%x
void ZhiDing()
{
	int num; int choice = 0;
	cout << "������ʮ������:" << endl;
	cin >> num;
	while (1)
	{
		menu1();
		printf("������˵���ţ�\n");
		scanf("%d", &choice);
		if (4 == choice) break;
		switch (choice)
		{
		case 1:cout << num << "תΪ�����ƣ�����bitset��:" << bitset<8>(num) << endl; break;
		case 2: {
			cout << num << "תΪ�˽��ƣ�����oct��:" << oct << num << endl;
			printf("תΪ�˽��ƣ�����o��:%o\n", num);//8λ����λ��0
		}break;
		case 3: {
			cout << num << "תΪʮ������:" << hex << num << endl;
			printf("תΪʮ�����ƣ�����x��:%x\n", num);
		}break;
		default:printf("������󣡣���\n"); break;
		}
	}
}
//���ã�����sstreamͷ�ļ�������ĳ���ƶ������������
void Stream()
{
	string s; int choice = 0;
	stringstream ss; int num;
	while (1)
	{
		menu2();
		printf("������˵���ţ�\n");
		scanf("%d", &choice);
		if (5 == choice) break;
		switch (choice)
		{
		case 1: {
			cout << "������һ������" << endl;
			cin >> num;
			ss.clear();//���һ�£���ֹ����
			ss << oct << num;//ʮ����תΪ�˽��ƶ�������
			ss >> s;//ת���İ˽����������ַ���s��
			cout << num << "תΪ�˽��ƣ���������:" << s << endl;
		}break;
		case 2: {
			cout << "������һ������" << endl;
			cin >> num;
			ss.clear();//���һ�£���ֹ����
			ss << hex << num;//ʮ����תΪʮ�����ƶ�������
			ss >> s;//ת����ʮ�������������ַ���s��
			cout << num << "תΪʮ�����ƣ���������:" << s << endl;
		}break;
		case 3: {
			cout << "������һ������" << endl;
			cin >> s;
			ss.clear();//���һ�£���ֹ����
			ss << oct << s;//��s�԰˽�����ʽ��������
			ss >> num;//��ʮ�������뵽num��
			cout << s << "תΪʮ���ƣ���������:" << num << endl;
		}break;
		case 4: {
			cout << "������һ������" << endl;
			cin >> s;
			ss.clear();//���һ�£���ֹ����
			ss << hex << s;//��s�԰˽�����ʽ��������
			ss >> num;//��ʮ�������뵽num��
			cout << s << "תΪʮ���ƣ���������:" << num << endl;
		}break;
		default:printf("������󣡣���\n"); break;
		}
	}
}
//������
int main()
{
	int choice = 0;
	string S;
	while (1)
	{
		menu();
		printf("������˵���ţ�\n");
		scanf("%d", &choice);
		if (5 == choice) break;
		switch (choice)
		{
		case 1:ToAll(); break;
		case 2:ToDecimal(S); break;
		case 3:ZhiDing(); break;
		case 4:Stream(); break;
		default:printf("������󣡣���\n"); break;
		}
	}
	return 0;
}
