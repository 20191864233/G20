// 712.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	double x0,x1,y,y1;
	x1=1;
	do
	{
		x0=x1;
		y=x0*x0*x0+2*x0*x0+3*x0+4;
		y1=12*x0*x0+4*x0+3;
		x1=x0-y/y1;
	}while(fabs(x0-x1)>=1e-10);
	printf("the root of equation is %f\n",x1);
    system("pause");
	return 0;
}

