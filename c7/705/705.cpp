// 705.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include<stdio.h>


void reverse(char [],int);


int  main(){

char string[50];
int strLength;
gets(string);
strLength = strlen(string);

reverse(string,strLength);


return 0;
}

void reverse(char string[50],int n){
    char newString[50] ;
	int i,j;
    for(i=n,j=0;i>=0;i--,j++){
        newString[j] = string[i];
    }

    for(i=0;i<=n;i++){
        printf("%c",newString[i]);
    }


}
