// test8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	int a[10][10];
	int i,j;

	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			a[i][j]=rand();
		}
	}

	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			printf("%7d",a[i][j]);
		}
		printf("\n");
	}


	printf("\n°°µã£º");

	int imax[10],jmin[10];

	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			if (a[i][j]>=a[i][j-1])
				imax[i]=a[i][j];
		}
		printf("%d ",imax[i]);
	}

	int x;
	for(x=0;x<=9;x++)
	{
		if (imax[x]==jmin[x])
			printf("%d ",imax[x]);
	}

	return 0;
}
