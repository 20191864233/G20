// test4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void turn(int a[3][3]);


int main(int argc, char* argv[])
{
	int a[3][3];
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			a[i][j]=rand();
		}
	}

	printf("原数组：\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%8d",a[i][j]);
		}
		printf("\n");
	}

	printf("行列互换后数组：\n");
	turn(a);

	return 0;
}




void turn(int a[3][3])
{
	int b[3][3];
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			b[i][j]=a[j][i];
		}
	}

	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%8d",b[i][j]);
		}
		printf("\n");
	}

}