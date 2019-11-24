// test15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
   char a[999],b[999];
   int i;
   printf(" ‰»Î: \n");
   gets(a);
   for(i=0;i<10;i++)
   {
	   b[i]=a[i];
   }
   b[i]=0;
   printf(" ‰≥ˆ: \n");
  printf("%s",b);
	return 0;
}
