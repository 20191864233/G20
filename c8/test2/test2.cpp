// test2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void length(char a[100],int *x);


int main(int argc, char* argv[])
{
	printf("ÊäÈëÈı¸ö×Ö·û´®£º\n");
	char a[100],b[100],c[100];
	gets(a);
	gets(b);
	gets(c);
	
	int *i,*j,*k;
	length(a,&i);
	length(b,&j);
	length(c,&k);

	return 0;
}



void length(char a[100],int *x)
{
	for(x=0;a[x]!='\0';i\x++);
}
