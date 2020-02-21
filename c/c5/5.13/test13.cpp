// test13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	long double x1=1,x2=0,a;
	printf("ÊäÈëa:");
	scanf("%lf",&a);

	for(;;)
	{
		x2=(x1+a/x1)/2;

		if( fabs(x1-x2)>=pow(10,-5) )
			x1=x2;
		else
			break;
	}
	printf("x=%lf\n",x2);

	return 0;
}
