// test7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void test1();
void test2();

int main(int argc, char* argv[])
{
    printf("(1)");
	test1();

	system("pause");

    printf("(2)");
	test2();

    system("pause");
	return 0;
}


void test1()
{    int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=-1;
	if (x!=0)
		if(x>0)
			y=1;
	else
		y=0;
	printf("x=%d,y=%d\n",x,y);
}

void test2()
{    int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=0;
	if (x>=0)
		if(x>0)
			y=1;
	else
		y=-1;
	printf("x=%d,y=%d\n",x,y);
}