// 710.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void longest(char str[]);


int main(int argc, char* argv[])
{
	char word[81];
		printf(" ‰»Î:\n");
      gets(word);
	longest(word);
	system("pause");
	return 0;
}




void longest(char str[])
{
	int i,j,len;
	char n[81],m[81];
	n[0]='\0';
	len=strlen(str);

    
   for(i=0;i<len;i++)
   {
	   j=0;
	   while(str[i]>='a'&&str[i]<='z')
	   {
		   m[j]=str[i];
            j++;
            i++;
	   }
	   m[j]='\0';
    if(strlen(n)<strlen(m))
	{
		strcpy(n,m);
	}
   }
    
   printf("longest word:");
   puts(n);
}




