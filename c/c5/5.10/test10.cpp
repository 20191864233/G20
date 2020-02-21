// test10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	int x=2,y=1;
	int a;
	int n=1;
	float s=0;

	do
	{
		s=s+x/y;
		a=x;
		x=x+y;
		y=a;
		n++;
	}while (n<=20);
	printf("前20项之和：%f\n",s);
	return 0;
}
