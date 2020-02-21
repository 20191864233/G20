// test9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	int x=1;
	do
	{
		int y,s=0;
		for(y=1;y<=x/2;y++)
		{
			if (x%y==0)
				s=s+y;
		}
		if (s==x)
		{
			printf("%d its factors are ",x);
			int z=1;
			while (z<=x/2)
			{
				if (x%z==0)
					printf("%d,",z);
				z++;
			}
			printf("\b \n");
		}

		x++;
	}while (x<=1000);
	return 0;
}
