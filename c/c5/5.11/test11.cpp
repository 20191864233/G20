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
	printf("��ʮ�����ʱ����%f��\n��ʮ�η���%f��\n",s,h);

	return 0;
}
