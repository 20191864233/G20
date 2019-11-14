
// pi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void pi1();
void pi2();
void pi3();
void pi4();
void pi5();
void pi6();
void pi7();
void pi8();


int main(int argc, char* argv[])
{
	pi1();
	pi2();
	pi3();
	pi4();
	pi5();
	pi6();
	pi7();
	pi8();

	return 0;
}



void pi1()
{
	double pi,x=2,a=1;
	int n=0;
	do
	{
		a=a+1/pow(x,2);

		n++;
		x++;
	}while( fabs( 1/pow(x,2)-1/pow(x-1,2) ) >= pow(10,-5) );
	pi=sqrt(a*6);

	printf("法1：pi=%.14f，次数：%d\n",pi,n);
}



void pi2()
{
	double pi,a=1,x=1;
	int n=0;
	do
	{
		a=a*((x+1)*(x+1))/(x*(x+2));

		x+=2;
		n++;
	}while( fabs( ((x+1)*(x+1))/(x*(x+2)) - (x*x)/((x-1)*(x+1)) ) >= pow(10,-5) );
	pi=a*2;

	printf("法2：pi=%.14f，次数：%d\n",pi,n);
}



void pi3()
{
	double pi=2,x1=1,x2=1,x3,x4;
	int n=0;
	do
	{
		pi=pi*2/sqrt(x1+x2);

		x3=x1;
		x4=x2;

		x2=sqrt(x1+x2);
		x1=2;
		n++;
	}while( fabs(2/sqrt(x1+x2)-2/sqrt(x3+x4)) >= pow(10,-5) );

	printf("法3：pi=%.14f，次数：%d\n",pi,n);
}



void pi4()
{
	double pi,a=1,x1=2,y1=1,x0,y0;
	int n=0;
	do
	{
		a=a*(x1/y1);

		x0=x1;
		y0=y1;

		if (n%2==0)
			y1+=2;
		else
			x1+=2;

		n++;
	}while(fabs(x1/y1-x0/y0)>pow(10,-5));
	pi=a*2;

	printf("法4：pi=%.14f，次数：%d\n",pi,n);
}



void pi5()
{
	double pi,a=1,b=1,b0,x=1,y=3,t=3;
	int n=0;
	do
	{
		b0=b;
		for(y;y<=t;y+=2)
		{
			b=b*(x/y);
			x++;
		}
		a=a+b;

		t+=2;
		n++;
	}while(fabs(b-b0)>=pow(10,-5));
	pi=2*a;

	printf("法5：pi=%.14f，次数：%d\n",pi,n);
}




void pi6()
{
	double pi,a=0,x=1;
	int n=0;
	
	do
	{
		n++;

		if (n%2==0)
			a=a-1/x;
		else
			a=a+1/x;

		x+=2;
	}while( fabs( 1/x-1/(x-2) )>=pow(10,-5) );
	pi=4*a;

	printf("法6：pi=%.14f，次数：%d\n",pi,n);
}




void pi7()
{
	double pi,a=1/2,x=2,y=3;
	int n=1;
	do
	{
		
	}while();
	
	printf("法7：pi=%.14f，次数：%d\n",pi,n);
}




void pi8()
{
	double pi,x=1,a=0;
	int n=0;

	do
	{
		a=a+1/pow(x,2);

		x+=2;
		n++;
	}while( fabs( 1/pow(x,2)-1/pow(x-2,2) )>=pow(10,-5) );
	pi=sqrt(8*a);
	
	printf("法8：pi=%.14f，次数：%d\n",pi,n);
}
