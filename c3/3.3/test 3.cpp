// test 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
int main()
{   double d,p,r,m;
    d=300000;
	p=6000;
	r=0.01;
	m=log(p/(p-d*r))/log(1+r);
	printf("m=%4.1f\n",m);
	system("pause");
	return 0;
}
