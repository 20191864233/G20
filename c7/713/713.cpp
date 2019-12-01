// 713.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


double p(double n,double x);

int main(int argc, char* argv[])
{
	double m;
	double n,x;
	scanf("%d %d",n,x);
	m=p(n,x);
    printf("%f\n",m);
	system("pause");
	return 0;
}




double p(double n,double x)
{
	double l;
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return x;
	}
	if(n>=2)
	{
		l= ((2*n-1)*x-p((n-1),x)-(n-1)*p((n-2),x))/n;
		return l;
	}
}