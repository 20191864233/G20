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
    	printf("����һ������a��");
    	scanf("%d",&a);
    	printf("��������Ҫ��λ��n��");
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
