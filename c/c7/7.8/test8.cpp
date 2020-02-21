// test8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void output(char a[4]);


int main(int argc, char* argv[])
{
	char a[4];
	printf("输入一个四位数字：");
	gets(a);

	output(a);

	printf("\n");
	return 0;
}



void output(char a[4])
{
	int i;
	for (i=0;i<=3;i++)
	{
		printf("%c  ",a[i]);
	}
}
