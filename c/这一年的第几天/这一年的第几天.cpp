// 这一年的第几天.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void days(int y,int m,int d);

int main(int argc, char* argv[])
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

	system("pause");
	return 0;
}



void days(int y,int m,int d)
{
	float jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec;
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
