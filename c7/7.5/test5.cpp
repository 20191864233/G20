// test5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void reverse(char a[100]);  //unfinished


int main(int argc, char* argv[])
{
	char a[100];
	printf("ÊäÈë×Ö·û´®£º");
	gets(a);

	reverse(a);

	return 0;
}




void reverse(char a[100])
{
	char b[100];

	int i;
	for (i=0;a[i]!='\0';i++)
	{
		b[99-i]=a[i];
	}
}
