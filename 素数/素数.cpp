// 素数.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <iostream>

int is_prime(int n);


int main(int argc, char* argv[])
{
	int n,m=100000;
	int total=1;
	long t0,t1;

	t0=clock();

	for (n=3;n<=m;n+=2)
	{
		if (m%100000==0)
		{
			printf("%d%%\r",n*100/m);
		}
		if (is_prime(n))
		{
			total++;
			//printf(\n%-4d %d",n,total);
		}
	}
	
	t1=clock();

	printf("\n2到%d之间素数的个数：%d\n计算2到%d之间素数个数用的总时间：%10.2f秒",m,total,m,(t1-t0)/(float)CLOCKS_PER_SEC);

	system("pause");
	return 0;
}


int is_prime(int n)
{
	int i;
	int flag=1;

	if(n%2)
	{
		flag=1;
		for(i=3;i<=sqrt(n);i+=2)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}else
		flag=0;

	return flag;
}
