// test11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void bubbles(int a[10]);


int main(int argc, char* argv[])
{
	int a[10];
	printf("输入10个数：\n");
	int i;
	for (i=0;i<=9;i++)
		scanf("%d",&a[i]);

	bubbles(a);

	return 0;
}



void bubbles(int a[10])
{
	int i,j;
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9-i;j++)
		{
			if (a[j]>a[j+1])
			{
		 	    int mid;
			    mid=a[j];
			    a[j]=a[j+1];
			    a[j+1]=mid;
			}
		}
	}

	printf("排序后：");
	for (i=0;i<=9;i++)
		printf("%d ",a[i]);

	printf("\n");
}