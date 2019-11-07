// test8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int x=100;

	printf("三位水仙花数：");
	do
	{
		int x1,x2,x3;
		x1=(x-x%100)/100;
		x2=(x%100-(x%100)%10)/10;
		x3=x%10;

		if ( x == pow(x1,3) + pow(x2,3) + pow(x3,3) )
			printf("%d  ",x);

		x++;
	}while(x<=999);
	printf("\n");

	return 0;
}

