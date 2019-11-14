// test17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	char i,j,k;

	for(i='X';i<='Z';i++)
	{
		for(j='X';j<='Z';j++)
		{
			for(k='X';k<='Z';k++)
			{
				if(i!='X' && k!='X' && k!='Z' && i!=j && i!=k && j!=k)
				printf("A vs %c,B vs %c,C vs %c\n",i,j,k);
			}
		}
	}

	return 0;
}
