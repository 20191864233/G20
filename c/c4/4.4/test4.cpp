// test4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void largest(int a,int b,int c);

int main(int argc, char* argv[])
{
	int x,y,z;
	printf ("输入a：");
	    scanf ("%d",&x);
    printf ("输入b：");
        scanf ("%d",&y);
    printf ("输入c：");
        scanf ("%d",&z);

	largest(x,y,z);

	system("pause");
	return 0;
}




void largest(int a,int b,int c)
{
    int max,max1;

    max1=(a>b) ? a:b;
    max=(max1>c) ? max1:c;

	printf("最大值为：%d\n",max);
}
