// test6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void mul(int *x,double *X);


int main(int argc, char* argv[])
{
	double s=0,X;
	int a=1,x=20;
	do
	{
		mul(&a,&X);
		s=s+X;
		a++;
	}while (a<=x);
	printf("½á¹û£º%5.0f\n",s);

	return 0;
}



void mul(int *x,double *X)
{
	double a=1;
	int y=1;
	do
	{
		a=a*y;
		y++;
	}while (y<=*x);
	*X=a;
}
