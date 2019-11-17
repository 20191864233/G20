// 63.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include<stdio.h>
int main()
{
	int i,j,min,t,a[10];
 
	printf("排序前的序列为：\n");
	for(i=0;i<10;i++)
		
	{
	  scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=0;i<9;i++)
    {
        min=i;					
        for(j=i+1;j<10;j++)
		{
            if(a[min]>a[j])
                min=j;			
		}
        if(min!=i)				
        {
            t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
	printf("排序后的序列为：\n");
	for(i=0;i<10;i++)			
		printf("%5d",a[i]);
	printf("\n");
	
	return 0;
}

