// 703.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int judge(int x);


int main(int argc, char* argv[])
{
	int a;
	scanf("%d",a);
 
   if( judge(a)==1) 
     printf("prime");
   if( judge(a)==1) 
     printf("not prime") ;
      return 0;
}



int judge(int x)
{
      int i;
    for(i=2;i<x;i++)
	{
		if(x%i==0)
      return 0;	
       else 
	   return 1;

	}
}