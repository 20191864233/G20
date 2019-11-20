
// test6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	int a[10][10]={0};
	int i,j;

	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if (j==0 || i==j)
				a[i][j]=1;
		}
	}

	for(i=2;i<=9;i++)
	{
		for(j=1;j<=8;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}

	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if (a[i][j]==0)
				printf("    ");
			else
				printf("%3d ",a[i][j]);
		}
		printf("\n");
	}


	return 0;
}
