// 704.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#define M 3	 
#define N 3
void convert(int a[M][N])	
{
	int i,j,b[N][M];
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			b[j][i]=a[i][j];
	printf("after converted:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
int main()
{
	int i,j,a[M][N];
	printf("input 3*3 matrix:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	convert(a);
	return 0;
}
