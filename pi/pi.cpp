
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


int main(int argc, char* argv[])
{
	pi1();
	pi2();
	pi3();
	pi4();

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
	double pi=2,x1=1,x2=1;
	int n=0;
	do
	{
		pi=pi*2/sqrt(x1+x2);

		x2=sqrt(x1+x2);
		x1=2;
		n++;
	}while( fabs() >= pow(10,-5) );

	printf("法3：pi=%.14f，次数：%d\n",pi,n);
}



void pi4()
{
	double pi,a=1,x=2,y=1;
	int n=0;
	do
	{
		a=a*(x/y);

		n++;
		if (n!=1 && n%2==0)
			y+=2;
		else
			x+=2;
	}while(n<pow(10,6));
	pi=a*2;

	printf("法4：pi=%.14f，次数：%d\n",pi,n);
}


