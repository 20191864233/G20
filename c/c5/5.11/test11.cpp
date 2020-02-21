// test11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	float H=100;
	float h;
	float s=0;
	int n=1;

	s=H;
	do
	{
		h=H/2;
		s=s+2*h;
		H=h;
		n++;
	}while(n<=10);
	h=H/2;
	printf("第十次落地时经过%f米\n第十次反弹%f米\n",s,h);

	return 0;
}
