// 倒过来的九九乘法表.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main(int argc, char* argv[])
{   
	for (int a=1;a<=9;a++)
	{    
		for (int b=1;b<=9;b++)
		{
			if (b>=a)
				printf("%d*%d=%-2d ",b,a,a*b);
			else
				printf("       ");
		}
		printf("\n");
	}
	getchar();
	return 0;
}
