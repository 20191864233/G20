// test 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int main()
{   char c1='C',c2='h',c3='i',c4='n',c5='a';
    c1=c1+4;
    c2=c2+4;
    c3=c3+4;
    c4=c4+4;
    c5=c5+4;
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');
	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	printf("注：第一个使用putchar函数，第二个使用printf函数\n");
	system("pause");
	return 0;
}
