// test 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
int main()
{   int c1,c2;
    printf("����c1,c2:");
	c1=getchar();
	c2=getchar();
	printf("��putchar:");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("��printf:");
	printf("%c%c\n",c1,c2);
	printf("���������ASCIIֵ:");
	printf("%d%d\n",c1,c2);
	system("pause");
    return 0;
}
