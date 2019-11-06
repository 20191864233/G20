// test5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>


int main(int argc, char* argv[])
{
	int a,n;

	for(;;)
	{
    	printf("输入一个数字a：");
    	scanf("%d",&a);
    	printf("输入你所要的位数n：");
    	scanf("%d",&n);

		if (a>=1 && a<=9)
			break;
		else
			printf("error\n");
	}

	int x=0,S=0,an=a;
	do
	{
		x++;
		S=S+a;
		a=a+an*pow(10,x);
	} while (x<n);

	printf("Sn=%d\n",S);

	system("pause");
	return 0;
}
