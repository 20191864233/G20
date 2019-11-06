// test2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

void pipi(const double x);


int main(int argc, char* argv[])
{
	const double x1=1e-6,x2=1e-8;

	printf("1e-6 ver.\n");
	pipi(x1);
	printf("1e-8 ver.\n");
	pipi(x2);

	return 0;
}



void pipi(const double x)
{
	int sign=1;
	double pi=0.0,n=1.0,term=1.0;
	int t=0;

	while (fabs(term)>=x)
	{

		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;

		t=t++;
	}
	pi=pi*4;
	printf("pi=%10.8f\nÑ­»·´ÎÊý:%d\n\n",pi,t);
}