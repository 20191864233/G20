// 65.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>

int main()

{

   int a[11]={1,10,20,30,40,50,60,70,80,99};

    int temp,i=0,j=0;

        scanf("%d",&temp);

    for(i=9;i>=0;i--)

	{

        if(temp<a[i]){

         a[i+1]=a[i];

		}
		else
		{

         a[i+1]=temp;

          break;

		}

	}

         for(i=0;i<11;i++)

		 {

         printf("%d\t",a[i]);

		 }

         

           return 0;

}