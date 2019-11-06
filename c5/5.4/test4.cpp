// test4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char* argv[])
{
	char c;
	printf("输入一行字符：");

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
	printf("数字：%d  字母：%d  空格：%d  其它：%d\n",num,alp,emp,oth);

	return 0;
}
