#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice, num;
	char result[100];
	printf("\t��ӭʹ�ý���ת�����ߣ�\n\n");
	printf("\t[1]10----------->>>2\n");
	printf("\t[2]10----------->>>8\n");
	printf("\t[3]10----------->>>16\n");
	printf("\t[4]16----------->>>2\n");
	printf("\t[5]16----------->>>8\n");
	printf("\t[6]16----------->>>10\n");
	printf("\t[7]8----------->>>2\n");
	printf("\t[8]8----------->>>10\n");
	printf("\t[9]8----------->>>16\n");
	printf("\n\t��������ţ�");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("\n\t��ʮ����ת��Ϊ�����ơ���");
		scanf("%d", &num);
		_itoa(num, result, 2);
		printf("\n\t�������%s", result);
		break;
	case 2:
		printf("\n\t��ʮ����ת��Ϊ�˽��ơ���");
		scanf("%d", &num);
		_itoa(num, result, 8);
		printf("\n\t�������%s", result);
		break;
	case 3:
		printf("\n\t��ʮ����ת��Ϊʮ�����ơ���");
		scanf("%d", &num);
		_itoa(num, result, 16);
		printf("\n\t�������0x%s", result);
		break;
	case 4:
		printf("\n\t��ʮ������ת��Ϊ�����ơ���");
		scanf("%x", &num);
		_itoa(num, result, 2);
		printf("\n\t�������%s", result);
		break;
	case 5:
		printf("\n\t��ʮ������ת��Ϊ�˽��ơ���");
		scanf("%x", &num);
		_itoa(num, result, 8);
		printf("\n\t�������%s", result);
		break;
	case 6:
		printf("\n\t��ʮ������ת��Ϊʮ���ơ���");
		scanf("%x", &num);
		_itoa(num, result, 10);
		printf("\n\t�������%s", result);
		break;
	case 7:
		printf("\n\t���˽���ת��Ϊ�����ơ���");
		scanf("%o", &num);
		_itoa(num, result, 2);
		printf("\n\t�������%s", result);
	case 8:
		printf("\n\t���˽���ת��Ϊ�˽��ơ���");
		scanf("%o", &num);
		_itoa(num, result, 8);
		printf("\n\t�������%s", result);
		break;
	case 9:
		printf("\n\t���˽���ת��Ϊʮ���ơ���");
		scanf("%o", &num);
		_itoa(num, result, 10);
		printf("\n\t�������%s", result);
		break;



	default:
		break;
	}

	return 0;


}