// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void max(int *x,int *y);


int main(int argc, char* argv[])
{
	int a,b,c;
	printf("��������������");
	scanf("%d %d %d",&a,&b,&c);

	max(&a,&b);
	max(&a,&c);
	max(&b,&c);

	printf("���ֵ��%d\n",a);

	return 0;
}



void max(int *x,int *y)
{
	if (*x<=*y)
	{
		int mid;
		mid=*y;
		*y=*x;
		*x=mid;
	}
}

