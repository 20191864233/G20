// test9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void jiweishu(int x);    //����λ��
void shuchushuzi(int x);    //���ÿһλ����
void nixu(int x);    //�������


int main(int argc, char* argv[])
{
	for(;;)
	{
        int a;
	    printf("����һ����������λ����������");
	    scanf("%d",&a);

	    if (a>=1 && a<=99999)
		{
		    jiweishu(a);    //����λ��
		    shuchushuzi(a);    //���ÿһλ���� 
		    nixu(a);    //�������
			break;
		}
		else
			printf("�������������Ҫ�����\n");
	}

	system("pause");
	return 0;
}





void jiweishu(int x)    //����λ��
{
	printf("(1)");

	if (x>=1 && x<=9)
		printf("һλ��\n");
	if (x>=10 && x<=99)
		printf("��λ��\n");
	if (x>=100 && x<=999)
		printf("��λ��\n");
	if (x>=1000 && x<=9999)
		printf("��λ��\n");
	if (x>=10000 && x<=99999)
		printf("��λ��\n");
}



void shuchushuzi(int x)    //���ÿһλ����
{
	printf("(2)");

	if (x>=1 && x<=9)
		printf("%d",x);
    if (x>=10 && x<=99)
	{
		int x1,x2;
		x1=x/10;
		x2=x%10;
		printf("���ÿһλ���֣�%d  %d\n",x1,x2);
	}
    if (x>=100 && x<=999)
	{
		int x1,x1a,x2,x3;
		x1=x/100;
		x1a=x%100;
		x2=x1a/10;
		x3=x1a%10;
		printf("���ÿһλ���֣�%d  %d  %d\n",x1,x2,x3);
	}
    if (x>=1000 && x<=9999)
	{
		int x1,x1a,x2,x2a,x3,x4;
		x1=x/1000;
		x1a=x%1000;
		x2=x1a/100;
		x2a=x1a%100;
		x3=x2a/10;
		x4=x2a%10;
		printf("���ÿһλ���֣�%d  %d  %d  %d\n",x1,x2,x3,x4);
	}
    if (x>=10000 && x<=99999)
	{
		int x1,x1a,x2,x2a,x3,x3a,x4,x5;
		x1=x/10000;
		x1a=x%10000;
		x2=x1a/1000;
		x2a=x1a%1000;
		x3=x2a/100;
		x3a=x2a%100;
		x4=x3a/10;
		x5=x3a%10;
		printf("���ÿһλ���֣�%d  %d  %d  %d  %d\n",x1,x2,x3,x4,x5);
	}
}



void nixu(int x)    //�������
{
	printf("(3)");

	if (x>=1 && x<=9)
		printf("%d",x);
    if (x>=10 && x<=99)
	{
		int x1,x2;
		x1=x/10;
		x2=x%10;
		printf("���������%d%d\n",x2,x1);
	}
    if (x>=100 && x<=999)
	{
		int x1,x1a,x2,x3;
		x1=x/100;
		x1a=x%100;
		x2=x1a/10;
		x3=x1a%10;
		printf("���������%d%d%d\n",x3,x2,x1);
	}
    if (x>=1000 && x<=9999)
	{
		int x1,x1a,x2,x2a,x3,x4;
		x1=x/1000;
		x1a=x%1000;
		x2=x1a/100;
		x2a=x1a%100;
		x3=x2a/10;
		x4=x2a%10;
		printf("���������%d%d%d%d\n",x4,x3,x2,x1);
	}
    if (x>=10000 && x<=99999)
	{
		int x1,x1a,x2,x2a,x3,x3a,x4,x5;
		x1=x/10000;
		x1a=x%10000;
		x2=x1a/1000;
		x2a=x1a%1000;
		x3=x2a/100;
		x3a=x2a%100;
		x4=x3a/10;
		x5=x3a%10;
		printf("���������%d%d%d%d%d\n",x5,x4,x3,x2,x1);
	}
}
