// test5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>

int main(int argc, char* argv[])
{
	for(;;)
	{
	int z;
	double sqrtz;
	printf("请输入一个小于1000的正整数:");
	scanf("%d",&z);
	    if (z<=0 || z>1000)
			printf("错误\n");
		else
		{
			sqrtz=sqrt(z);
		    printf("%d的平方根是%4.0f\n",z,sqrtz);
			break;
		}
	}
	system("pause");

	return 0;
}
