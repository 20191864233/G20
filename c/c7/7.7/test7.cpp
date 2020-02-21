// test7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void replace(char a[100]);


int main(int argc, char* argv[])
{
	char a[100];
	printf("ÊäÈë×Ö·û´®£º");
	gets(a);

	replace(a);

	return 0;
}




void replace(char a[100])
{
	char b[100]={0};

	int i,j=0;
	for (i=0;i<=99;i++)
	{
		if ( a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
		{
			b[j]=a[i];
			j++;
		}
	}
	printf("¸´ÖÆÔªÒô×ÖÄ¸ºó£º");
	puts(b);
}