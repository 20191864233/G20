// 66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


void nixv(int a[],int i);



int main(int argc, char* argv[])
{
   int a[100],n;
        int i;
       printf("数组的长度:\n");
       scanf("%d",&n);
    for(i=0;i<n;i++)
    {
              scanf("%d",&a[i]);
    }
 nixv(a,n);
    for(i=0;i<n;i++)
    {
             printf("%d ",a[i]);
    }
 
 
    return 0;
}










void nixv(int a[],int n)
{
         int mid=n/2;
        int temp,i;
        for(i=0;i<mid;i++)
        {
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
		}
}






	

