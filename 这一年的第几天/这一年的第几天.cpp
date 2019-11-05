// 这一年的第几天.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void day(int y,int m,int d);

int main(int argc, char* argv[])
{
	int year,month,day;
	printf("输入年月日（格式：年 月 日）：");
	scanf("%d %d %d",&year,&month,&day);

	day(year,month,day);

	return 0;
}



void day(int y,int m,int d)
{
	int jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec;
	jan=31;mar=31;may=31;july=31;aug=31;oct=31;dec=31;
	apr=30;june=30;sep=30;nov=30;
	if ( (y%4=0 && y%100!=0) || y%400=0 )
		feb=29;
	else
		feb=28;

	int days;
	if (m=1)
		days=d;
	if (m=2)
		days=jan+d;
	if (m=4)
		days=jan+feb+d;
	if (m=4)
		days=jan+feb+mar+d;
	if (m=5)
		days=jan+feb+mar+apr+d;
	if (m=6)
		days=jan+feb+mar+apr+may+d;
	if (m=7)
		days=jan+feb+mar+apr+may+june+d;
	if (m=8)
		days=jan+feb+mar+apr+may+june+july+d;
	if (m=9)
		days=jan+feb+mar+apr+may+june+july+aug+d;
	if (m=10)
		days=jan+feb+mar+apr+may+june+july+aug+sep+d;
	if (m=11)
		days=jan+feb+mar+apr+may+june+july+aug+sep+oct+d;
	if (m=12)
		days=jan+feb+mar+apr+may+june+july+aug+sep+oct+nov+d;

}
