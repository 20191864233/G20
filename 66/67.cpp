// 67.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#define N 11
int main(int argc, char* argv[])
{
	int i,j,n=10,a[N][N],k;
	printf("%dÐÐÑî»ÔÈý½Ç£º\n",n);
	for(i=1;i<=n;i++)
	{
		a[i][1]=a[i][i]=1;
	}
	for(i=3;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
		a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=1;i<=n;i++)
	{
        for(k=1;k<=n-i;k++)
            printf("   ");
		for(j=1;j<=i;j++)
		{
			printf("%6d",a[i][j]);
	      
		}
  printf("\n");
	}


	return 0;
}

