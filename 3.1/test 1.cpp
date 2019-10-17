// test 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>

int main()
{   float p,r,n;
    r=0.07;
	n=10;
	p=pow(1+r,n);
		printf("p=%f\n",p);

	system("pause");
	return 0;
}