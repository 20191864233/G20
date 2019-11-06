// test9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void jiweishu(int x);    //计算位数
void shuchushuzi(int x);    //输出每一位数字
void nixu(int x);    //逆序输出


int main(int argc, char* argv[])
{
	for(;;)
	{
        int a;
	    printf("输入一个不多于五位的正整数：");
	    scanf("%d",&a);

	    if (a>=1 && a<=99999)
		{
		    jiweishu(a);    //计算位数
		    shuchushuzi(a);    //输出每一位数字 
		    nixu(a);    //逆序输出
			break;
		}
		else
			printf("错误，请输入符合要求的数\n");
	}

	system("pause");
	return 0;
}





void jiweishu(int x)    //计算位数
{
	printf("(1)");

	if (x>=1 && x<=9)
		printf("一位数\n");
	if (x>=10 && x<=99)
		printf("两位数\n");
	if (x>=100 && x<=999)
		printf("三位数\n");
	if (x>=1000 && x<=9999)
		printf("四位数\n");
	if (x>=10000 && x<=99999)
		printf("五位数\n");
}



void shuchushuzi(int x)    //输出每一位数字
{
	printf("(2)");

	if (x>=1 && x<=9)
		printf("%d",x);
    if (x>=10 && x<=99)
	{
		int x1,x2;
		x1=x/10;
		x2=x%10;
		printf("输出每一位数字：%d  %d\n",x1,x2);
	}
    if (x>=100 && x<=999)
	{
		int x1,x1a,x2,x3;
		x1=x/100;
		x1a=x%100;
		x2=x1a/10;
		x3=x1a%10;
		printf("输出每一位数字：%d  %d  %d\n",x1,x2,x3);
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
		printf("输出每一位数字：%d  %d  %d  %d\n",x1,x2,x3,x4);
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
		printf("输出每一位数字：%d  %d  %d  %d  %d\n",x1,x2,x3,x4,x5);
	}
}



void nixu(int x)    //逆序输出
{
	printf("(3)");

	if (x>=1 && x<=9)
		printf("%d",x);
    if (x>=10 && x<=99)
	{
		int x1,x2;
		x1=x/10;
		x2=x%10;
		printf("逆序输出：%d%d\n",x2,x1);
	}
    if (x>=100 && x<=999)
	{
		int x1,x1a,x2,x3;
		x1=x/100;
		x1a=x%100;
		x2=x1a/10;
		x3=x1a%10;
		printf("逆序输出：%d%d%d\n",x3,x2,x1);
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
		printf("逆序输出：%d%d%d%d\n",x4,x3,x2,x1);
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
		printf("逆序输出：%d%d%d%d%d\n",x5,x4,x3,x2,x1);
	}
}
