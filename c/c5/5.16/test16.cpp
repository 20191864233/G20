// test16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	int a,b,n=3;
	for (a=-3;a<=3;a++)
	{
		for (b=-3;b<=3;b++)
		{
			if ( fabs(a)-fabs(b)<n )
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
		if (a<0)
			n-=2;
		else
			n+=2;
	}
	
	return 0;
}
