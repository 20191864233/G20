// test13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[])
{
    char a[10],b[10],c[20];
    int i,j;
    printf("���������ַ�����\n");
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    c[i]=a[i];
    for(j=0;b[j]!='\0';j++)
    c[i+j]=b[j];
    c[i+j+1]='\0';
    printf("���ַ������Ӻ���ַ���Ϊ��%s\n",c);

	return 0;
}
