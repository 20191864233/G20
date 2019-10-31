// test3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void test1();
void test2();
void test3();
void test4();
void test5();

int main(int argc, char* argv[])
{
	test1();
    test2();
    test3();
    test4();
    test5();
	
	getchar();
	return 0;
}


void test1()
{
    int a=3,b=4,c=5;
	printf("a+b>c && b==c：");
	if (a+b>c && b==c)
		printf("真\n");
	else 
		printf("假\n");
}

void test2()
{
    int a=3,b=4,c=5;
	printf("a || b+c && b-c：");
	if (a || b+c && b-c)
		printf("真\n");
	else 
		printf("假\n");
}

void test3()
{
    int a=3,b=4,c=5;
	printf("!(a>b) && !c || 1：");
	if (!(a>b) && !c || 1)
		printf("真\n");
	else 
		printf("假\n");
}

void test4()
{
    int a=3,b=4,c=5;
	int x,y;
	printf("!(x=a) && (y=b) && 0：");
	if (!(x=a) && (y=b) && 0)
		printf("真\n");
	else 
		printf("假\n");
}

void test5()
{
    int a=3,b=4,c=5;
	printf("!(a+b)+c-1 && b+c/2：");
	if (!(a+b)+c-1 && b+c/2)
		printf("真\n");
	else 
		printf("假\n");
}