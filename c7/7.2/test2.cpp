// test2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

void bigger(int a,int b,int c);
void equal(int a,int b,int c);
void smaller(int a,int b,int c);


int main(int argc, char* argv[])
{
	int a,b,c;
	printf("输入a,b,c:");
	scanf("%d %d %d",&a,&b,&c);

	double d;
	d=pow(b,2)-4*a*c;
	if (d>0)
		bigger(a,b,c);
	else if (d==0)
		equal(a,b,c);
	else if (d<0)
		smaller(a,b,c);

	return 0;
}



void bigger (int a,int b,int c)
{
	double x1,x2;

	double d;
	d=pow(b,2)-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("x1=%.2f,x2=%.2f\n",x1,x2);
}




void equal (int a,int b,int c)
{
	double x;
	x=(-b)/(2*a);
	printf("x=%.2f\n",x);
}



void smaller (int a,int b,int c)
{
	printf("无实根\n");
}
