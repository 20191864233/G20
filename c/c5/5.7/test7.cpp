// test7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[])
{
	double k;

	double d1=100,d2=50,d3=10;
	double S,s1=0,s2=0,s3=0;

	k=1;
	do
	{
		s1=s1+k;
		k++;
	}while(k<=d1);

	k=1;
	do
	{
		s2=s2+pow(k,2);
		k++;
	}while(k<=d2);

	k=1;
	do
	{
		s3=s3+1/k;
		k++;
	}while(k<=d3);


	S=s1+s2+s3;
	printf("½á¹û£º%f\n",S);

	return 0;
}
