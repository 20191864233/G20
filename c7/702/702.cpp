// 702.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void greater(float x, float y, float z, float m);      //�������0ʱ����
void equal(float x, float y, float z, float m);        //�������0ʱ����
void less(float x, float y, float z, float m);         //����С��0ʱ����
void function(float j, float k, float l, float n);     //�����б�ʽ����
int main()
{
	float a, b, c, d;
	printf("Please enter A, B, C: ");                  
	scanf("%f %f %f", &a, &b, &c);
	d=b*b-4*a*c;                                      
	function(a, b, c, d);                              
	system("pause");
	return 0;
}

void function(float j, float k, float l, float n)
{
	n>0 ? greater(j, k, l, n) : (n==0 ? equal(j, k, l, n) : less(j, k, l, n));
}








void greater(float x, float y, float z, float m)
{
	printf("X1=%.2f, X2=%.2f\n", ((-1)*y+sqrt(m))/(2*x), ((-1)*y-sqrt(m))/(2*x));
}





void equal(float x, float y, float z, float m)
{
	printf("X=%.2f\n", ((-1)*y)/(2*x));
}




void less(float x, float y, float z, float m)
{
	printf("The equation is unsolvable\n");
}

