// 整合.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

void date();
void days(int y,int m,int d);
void prime();


int main(int argc, char* argv[])
{
	char c;
	printf("输入指令（执行素数判断请输a，日期计算请输b，退出请输c）：");
	scanf("%c",&c);
	switch(c)
	{
	case'a':printf("判断素数\n");prime();break;
	case'b':printf("判断输入的日期是这一年的第几天\n");date();break;
	case'c':break;
	}
	return 0;
}




void date()
{
	int year,month,day;

	for(;;)
	{
		printf("输入日期（格式：年 月 日）：");
    	    scanf("%d %d %d",&year,&month,&day);

		if (year>=1 && (month<=12 && month>=1) && (day<=31 && day>=1))
		{
			int feb;
			if ( (year%4==0 && year%100!=0) || year%400==0 )
		        feb=29;
	        else
		        feb=28;

			if (day<=feb)
				break;
			else
				printf("错误\n");
		}
		else
			printf("错误\n");
	}

	days(year,month,day);
}



void days(int y,int m,int d)
{
	int jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec;
	jan=31;mar=31;may=31;july=31;aug=31;oct=31;dec=31;
	apr=30;june=30;sep=30;nov=30;
	if ( (y%4==0 && y%100!=0) || y%400==0 )
		feb=29;
	else
		feb=28;

	int days;
	if (m==1)
		days=d;
	else if (m==2)
		days=jan+d;
	else if (m==3)
		days=jan+feb+d;
	else if (m==4)
		days=jan+feb+mar+d;
	else if (m==5)
		days=jan+feb+mar+apr+d;
	else if (m==6)
		days=jan+feb+mar+apr+may+d;
	else if (m==7)
		days=jan+feb+mar+apr+may+june+d;
	else if (m==8)
		days=jan+feb+mar+apr+may+june+july+d;
	else if (m==9)
		days=jan+feb+mar+apr+may+june+july+aug+d;
	else if (m==10)
		days=jan+feb+mar+apr+may+june+july+aug+sep+d;
	else if (m==11)
		days=jan+feb+mar+apr+may+june+july+aug+sep+oct+d;
	else if (m==12)
		days=jan+feb+mar+apr+may+june+july+aug+sep+oct+nov+d;

	printf("是第%d天\n",days);
}


void prime()
{
	int m;
	printf("输入一个正整数：");
	scanf("%d",&m);

	int i;
	if (m%2==0)
		printf("不是素数\n");
	else
	{
		for(i=3;i<=sqrt(m);i+=2)
		{
			if (m%i==0)
				printf("不是素数\n");
			break;
		}
		printf("是素数\n");
	}
}