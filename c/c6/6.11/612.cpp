// 612.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
 #include<stdio.h>
   int  main()
    {
        char str[]={"*****"};
        int i,k;
        for(i=1;i<=5;i++)
        {
            printf("%s\n",str);
            for(k=1;k<=i;k++)
            {
                char c=32;
                printf("%c",c);
            }   
        }
		return 0;
    }


