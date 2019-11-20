// 选择法和冒泡法的练习.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void xuanze();
void maopao();


int main(int argc, char* argv[])
{
	printf("选择法\n");
	xuanze();
	printf("冒泡法\n");
	maopao();

	return 0;
}




void xuanze()
{
	int a[10],i,j;

	for (i=0;i<=9;i++)
	{
		a[i]=rand();
	}

	for (i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	for (i=0;i<=9;i++)
	{
		for (j=i+1;j<=9;j++)
		{
			if (a[i]<a[j])
			{
				int mid;
				mid=a[i];
				a[i]=a[j];
				a[j]=mid;
			}
		}
	}

	for (i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}




void maopao()
{
	int a[10],i,j;

	for (i=0;i<=9;i++)
	{
		a[i]=rand();
	}

	for (i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	for (j=0;j<=9;j++)
	{
		for (i=0;i<=9-j;i++)
		{
			if (a[i]<a[i+1])
			{
			    int mid;

			    mid=a[i];
			    a[i]=a[i+1];
			    a[i+1]=mid;
			}
		}
	}

	for (i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}



