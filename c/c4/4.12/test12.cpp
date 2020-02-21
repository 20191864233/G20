// test12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>

void abs(float *x,float *y);                  //取绝对值
void height(float x,float y);                 //高度计算


int main(int argc, char* argv[])
{
	float x1,y1;                              //输入原始坐标
	printf("输入坐标（格式：x y）：");
	scanf("%f %f",&x1,&y1);

	abs(&x1,&y1);                             //将原始坐标全部转化到第一象限（取绝对值）

	float x2,y2;                              //转化参考系（以第一象限的圆的圆心为坐标原点）
	x2=x1-2;
	y2=y1-2;
	abs(&x2,&y2);                             //将新坐标系中的坐标再次转化到第一象限（取绝对值）

	if (sqrt(x2*x2+y2*y2)<1)                  //计算高度
		height(x2,y2);
	else
		printf("高度=0\n");

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
	printf("高度=%f\n",H);
}