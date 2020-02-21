// test10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>

void ifver(float I);
void switchver(float I);


int main(int argc, char* argv[])
{
	float i;
	printf("利润（单位：万元）:");
	scanf("%f",&i);

	ifver(i);
	switchver(i);

	system("pause");
	return 0;
}




void ifver(float I)
{
	float p;
	{
		if (I<=10)
		    p=I*0.1;
	    else if (I>10 && I<=20)
		    p=10*0.1+(I-10)*0.075;
    	else if (I>20 && I<=40)
	    	p=10*0.1+(20-10)*0.075+(I-20)*0.05;
        else if (I>40 && I<=60)
	    	p=10*0.1+(20-10)*0.075+(40-20)*0.05+(I-40)*0.03;
        else if (I>60 && I<=100)
	    	p=10*0.1+(20-10)*0.075+(40-20)*0.05+(60-40)*0.03+(I-60)*0.015;
        else
	    	p=10*0.1+(20-10)*0.075+(40-20)*0.05+(60-40)*0.03+(100-60)*0.015+(I-100)*0.01;
	}
	printf("奖金(if ver.)：%-7.3f\n",p);
}




void switchver(float I)
{
	char io;
	if (I<=10)
		io='A';
    else if (I>10 && I<=20)
		io='B';
	else if (I>20 && I<=40)
		io='C';
    else if (I>40 && I<=60)
		io='D';
    else if (I>60 && I<=100)
		io='E';

	float p;
	{
	    switch(io)
		{
	    case'A': p=I*0.1; break;
     	case'B': p=10*0.1+(I-10)*0.075; break;
    	case'C': p=10*0.1+(20-10)*0.075+(I-20)*0.05; break;
    	case'D': p=10*0.1+(20-10)*0.075+(40-20)*0.05+(I-40)*0.03; break;
    	case'E': p=10*0.1+(20-10)*0.075+(40-20)*0.05+(60-40)*0.03+(I-60)*0.015; break;
        default: p=10*0.1+(20-10)*0.075+(40-20)*0.05+(60-40)*0.03+(100-60)*0.015+(I-100)*0.01; break;
		}
	}
	printf("奖金(switch ver.)：%-7.3f\n",p); 
}