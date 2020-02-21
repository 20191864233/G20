// test 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>

int main()
{   double p,r,n,tup;
    r=0.07;
	n=10;
	p=pow(1+r,n);
	tup=p-1;
		printf("tup=%f\n",tup);

	system("pause");
	return 0;
}