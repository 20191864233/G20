// test3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

void prime(int m);


int main(int argc, char* argv[])
{
	int m;
	printf("����һ����������");
	scanf("%d",&m);

	prime(m);

	return 0;
}



void prime(int m)
{
	int i;
	if (m%2==0)
		printf("��������\n");
	else
	{
		for(i=3;i<=sqrt(m);i+=2)
		{
			if (m%i==0)
				printf("��������\n");
			break;
		}
		printf("������\n");
	}
}
