// test4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void largest(int a,int b,int c);

int main(int argc, char* argv[])
{
	int x,y,z;
	printf ("����a��");
	    scanf ("%d",&x);
    printf ("����b��");
        scanf ("%d",&y);
    printf ("����c��");
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

	printf("���ֵΪ��%d\n",max);
}
