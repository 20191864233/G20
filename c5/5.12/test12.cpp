// test12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	int n,x=1;
	for (n=1;n<10;n++)
	{
		x=(x+1)*2;
	}
	printf("第一天共摘%d个桃子\n我觉得这猴子会撑死\n",x);

	return 0;
}
