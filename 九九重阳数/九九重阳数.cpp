// 九九重阳数.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <time.h>


int main(int argc, char* argv[])
{
	int x=100000000,t1,t2;

	t1=clock();

	printf("九九重阳数：");
	do
	{
		int x1,x2,x3,x4,x5,x6,x7,x8,x9;
		x1=(x-x%100000000)/100000000;
		x2=(x%100000000-x%10000000)/10000000;
		x3=(x%10000000-x%1000000)/1000000;
		x4=(x%1000000-x%100000)/100000;
		x5=(x%100000-x%10000)/10000;
		x6=(x%10000-x%1000)/1000;
		x7=(x%1000-x%100)/100;
		x8=(x%100-x%10)/10;
		x9=x%10;

		if (x==pow(x1,9)+pow(x2,9)+pow(x3,9)+pow(x4,9)+pow(x5,9)+pow(x6,9)+pow(x7,9)+pow(x8,9)+pow(x9,9))
			printf("%d  ",x);

		x++;
	}while(x<=999999999);

	t2=clock();
	printf("\n用时：%4.2f秒\n",(t2-t1)/(float)CLOCKS_PER_SEC);

	return 0;
}

