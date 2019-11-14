// test15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	long double x1=-10,x2=10,mid;
	
	for (;;)
	{
		mid=(x1+x2)/2;

		long double f1,f2,f3;
		f1=2*pow(x1,3)-4*pow(x1,2)+3*x1-6;
		f2=2*pow(x2,3)-4*pow(x2,2)+3*x2-6;
		f3=2*pow(mid,3)-4*pow(mid,2)+3*mid-6;

		if ( fabs(f3)==0 )
			break;
		else if ( f1*f3<0 )
			x2=mid;
		else if ( f2*f3<0 )
			x1=mid;
	}
	printf("x=%f\n",mid);

	return 0;
}
