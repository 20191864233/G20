// test12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>

void abs(float *x,float *y);                  //ȡ����ֵ
void height(float x,float y);                 //�߶ȼ���


int main(int argc, char* argv[])
{
	float x1,y1;                              //����ԭʼ����
	printf("�������꣨��ʽ��x y����");
	scanf("%f %f",&x1,&y1);

	abs(&x1,&y1);                             //��ԭʼ����ȫ��ת������һ���ޣ�ȡ����ֵ��

	float x2,y2;                              //ת���ο�ϵ���Ե�һ���޵�Բ��Բ��Ϊ����ԭ�㣩
	x2=x1-2;
	y2=y1-2;
	abs(&x2,&y2);                             //��������ϵ�е������ٴ�ת������һ���ޣ�ȡ����ֵ��

	if (sqrt(x2*x2+y2*y2)<1)                  //����߶�
		height(x2,y2);
	else
		printf("�߶�=0\n");

	system("pause");
	return 0;
}



void abs(float *x,float *y)
{
	if (*x<=0)
		*x=-*x;
	if (*y<=0)
		*y=-*y;
}



void height(float x,float y)
{
	float d,H,h;
	d=sqrt(x*x+y*y);
	h=10*d;
	H=10-h;
	printf("�߶�=%f\n",H);
}