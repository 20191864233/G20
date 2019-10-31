// test6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void function(float x);


int main(int argc, char* argv[])
{
	float x1;
	printf(" ‰»Îxµƒ÷µ£∫");
	scanf("%f",&x1);

    function(x1);

	system("pause");
	return 0;
}

void function(float x)
{	
	float y;
	{
		if (x<1)
		    y=x;
        if (x>=1 && x<10)
		    y=(2*x-1);
        if (x>=10)
		    y=(3*x-11);
	}
    printf("y=%f\n",y);
}