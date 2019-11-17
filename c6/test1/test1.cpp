// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>


int main()
{
	int i,a[100];

	for(i=0;i<=99;i++)
	{
		a[i]=i+1;
		if (a[i]%2!=0)
		{
			int r=0;
			for (int x=3;x<=sqrt(a[i]);x+=2)
			{
				if (a[i]%x==0)
				{
					r=1;
					break;
				}
			}
			if (r=0)
				printf("%d  ",a[i]);
		}
	}

	printf("\n");
	return 0;
}
