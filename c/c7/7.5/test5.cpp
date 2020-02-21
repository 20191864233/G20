// test5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void reverse(char a[1000]);


int main(int argc, char* argv[])
{
	char a[1000];
	printf("ÊäÈë×Ö·û´®£º");
	gets(a);

	reverse(a);

	printf("·´ĞòÊä³ö£º");
	puts(a);

	return 0;
}




void reverse(char a[1000])
{
	int i,n=0;
	for (i=0;a[i]!=0;i++)
		n++;

	char temp;
	for (i=0;i<=n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}
