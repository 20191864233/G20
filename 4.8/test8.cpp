// test8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void grade ();

int main(int argc, char* argv[])
{
	grade ();

	system("pause");
	return 0;
}

void grade ()
{

    for(;;)
	{
        int score;
	    printf("enter your score:");
	    scanf("%d",&score);

        if (score>=90 && score<=100)
		{
	        printf("grade:A\n");
	        break;
		}
        else if (score>=80 && score<90)
		{
		    printf("grade:B\n");
	        break;
		}
        else if (score>=70 && score<80)
		{
		    printf("grade:C\n");
	        break;
		}
        else if (score>=60 && score<70)
		{
		    printf("grade:D\n");
	        break;
		}
        else if (score>=0 && score<60)
		{
		    printf("grade:E\n");
 	        break;
		}
	    else printf("error\n");
	}
}