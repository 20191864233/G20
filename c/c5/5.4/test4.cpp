// test4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	char c;
	printf("����һ���ַ���");

	int alp=0,emp=0,num=0,oth=0;
	while( ( c=getchar() )!='\n')
	{
		if (c==' ')
			emp++;
		else if ( (c>='a' && c<='z')||(c>='A' && c<='Z') )
			alp++;
		else if (c>='0' && c<='9')
			num++;
		else
			oth++;
	}
	printf("���֣�%d  ��ĸ��%d  �ո�%d  ������%d\n",num,alp,emp,oth);

	return 0;
}
