// test9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>


void weishu(int a);
void meiyiweishu(int a);
void nixv(int a);


int main(int argc, char* argv[])
{
	for(;;)
	{
        int x;
	    printf("����һ����������λ����������");
	    scanf("%d",&x);

	    if (x>=1 && x<=99999)
		{
			weishu(x);

	        printf("ÿһλ����");
                meiyiweishu(x);
			        printf("\n");

            nixv(x);
			    printf("\n");

			break;
		}
		else
			printf("����!\n");
	}
	system("pause");
	return 0;
	}







	void weishu(int a)
	{
		int m=0;
		printf("λ����");
	while(a){
        m++;
        a/=10;
		}
		printf("%d\n",m);
	}




	void meiyiweishu (int a)
	{
	int v;
    if(a==0) return;
    v=a%10;
    meiyiweishu(a/10);
    printf("%d ", v);
	}






	void nixv(int a)
	{
		printf("������д��");
		 while(a != 0)
	  {
         printf("%d",a%10);
           a /= 10;
	  }
	}
