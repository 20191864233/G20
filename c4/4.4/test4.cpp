// test4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void larger();

int main(int argc, char* argv[])
{
	larger();

	system("pause");
	return 0;
}

void larger()
{
    int a,b,c,max,max1;
	    printf("����a��");
	        scanf("%d",&a);
        printf("����b��");
        	scanf("%d",&b);
        printf("����c��");
        	scanf("%d",&c);
    	max1=(a>b) ? a:b;
    	max=(max1>c) ? max1:c;
	printf("���ֵΪ��%d\n",max);

}
