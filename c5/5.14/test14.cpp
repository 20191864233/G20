// test14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char* argv[])
{
	long double x1=1.5,x2=1.5;
	for(;;)
	{
		long double f,df;
		f=2*pow(x1,3)-4*pow(x1,2)+3*x1-6;
		df=6*pow(x1,2)-8*x1+3;

		x2=x1-f/df;
		if ( fabs(x2-x1)>=pow(10,-5) )
			x1=x2;
		else
			break;
	}
	printf("x=%lf\n",x2);

	return 0;
}
