// test6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void connect(char a[],char b[]);


int main(int argc, char* argv[])
{
    char a[100],b[100];
    printf("ÊäÈëÁ½¸ö×Ö·û´®£º\n");
    gets(a);
    gets(b);

	connect(a,b);

	return 0;
}




void connect(char a[],char b[])
{
	char c[1000000];
	int i,j;
	for(i=0;a[i]!='\0';i++)
        c[i]=a[i];
    for(j=0;b[j]!='\0';j++)
        c[i+j]=b[j];
    c[i+j+1]='\0';

	puts(c);
}
