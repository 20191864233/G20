// 613.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
   int main()
{
 char a[10],b[10];
    int i;
    printf("����һ�е��ģ�\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if('A'<=a[i]&&a[i]<='Z') 
		{
			b[i]=155-a[i];
		}
        else if('a'<=a[i]&&a[i]<='z') 
		{
			b[i]=219-a[i];
		}
        else
		{
			b[i]=a[i];
		}
    }
    b[i]=0;
    printf("ԭ����Ϊ��\n");
    puts(a);
    printf("���뷭���ԭ��Ϊ��\n");
    puts(b);

return 0;
}