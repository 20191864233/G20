// test 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{   int a,b;
    float x,y;
	char c1,c2;
	scanf("a=%d b=%d",&a,&b);
    scanf("%f %e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("a=%d,b=%d,x=%3.1f,y=%5.2f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
		return 0;
}
