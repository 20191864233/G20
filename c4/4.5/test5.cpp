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
	printf("������һ��С��1000��������:");
	scanf("%d",&z);
	    if (z<=0 || z>1000)
			printf("����\n");
		else
		{
			sqrtz=sqrt(z);
		    printf("%d��ƽ������%4.0f\n",z,sqrtz);
			break;
		}
	}
	system("pause");

	return 0;
}
