// test3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void gcd(int a,int b);
void lcm(int a,int b);


int main(int argc, char* argv[])
{
	int x,y;
	printf("输入两个整数：");
	scanf("%d %d",&x,&y);

	gcd(x,y);
	lcm(x,y);

	return 0;
}



void gcd(int a,int b)
{
	int r;

	int m;
	if (a<b)
	{
		m=a;
		a=b;
		b=m;
	}

	while (a%b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("最大公约数：%d\n",b);
}



void lcm(int a,int b)
{
	int lcm=1;
	while (lcm%a!=0 || lcm%b!=0)
	{
		lcm++;
	}
	printf("最小公倍数：%d\n",lcm);
}
