// test 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
int main()
{   float r,h,l,s,sq,vq,vz;
	float pi=3.1415926;
	printf("请输入圆的半径r:");
    scanf("%f",&r);     
    printf("请输入圆柱的高h:");
    scanf("%f",&h);      
	l=2*pi*r;               
	s=pi*r*r;               
	sq=4*pi*r*r; 
	vq=0.75*pi*r*r*r;  
	vz=pi*r*r*h;        
	printf("圆的周长 l=%6.2f\n",l);
    printf("圆的面积 s=%6.2f\n",s);
	printf("球的表面积 sq=%6.2f\n",sq);
    printf("球的体积 vq=%6.2f\n",vq);
	printf("圆柱的体积 vz=%6.2f\n",vz);
	system("pause");
	return 0;
}
