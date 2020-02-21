// 九九重阳数.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <time.h>


int main(int argc, char* argv[])
{
	int x=100,t1,t2;
	int a[100]={153,370,371,407,1634,8208,9474,54748,92727,93084,548834,1741725,4210818,9800817,9926315,24678050,24678051,88593477,146511208,472335975,534494836,912985153},i=0;

	t1=clock();

	printf("水仙花数~九九重阳数：");
	do
	{
		if (x==a[i])
		{
			printf("%d  ",x);
			i++;
		}

		x++;
	}while(x<=999999999);

	t2=clock();
	printf("\n用时：%4.2f秒\n",(t2-t1)/(float)CLOCKS_PER_SEC);

	return 0;
}

