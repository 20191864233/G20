// test 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
int main()
{   float r,h,l,s,sq,vq,vz;
	float pi=3.1415926;
	printf("������Բ�İ뾶r:");
    scanf("%f",&r);     
    printf("������Բ���ĸ�h:");
    scanf("%f",&h);      
	l=2*pi*r;               
	s=pi*r*r;               
	sq=4*pi*r*r; 
	vq=0.75*pi*r*r*r;  
	vz=pi*r*r*h;        
	printf("Բ���ܳ� l=%6.2f\n",l);
    printf("Բ����� s=%6.2f\n",s);
	printf("��ı���� sq=%6.2f\n",sq);
    printf("������ vq=%6.2f\n",vq);
	printf("Բ������� vz=%6.2f\n",vz);
	system("pause");
	return 0;
}
