// 68.cpp : Defines the entry point for the console application.
//
#define N 3              /*在此改变数值*/
#include  <stdio.h>
#include "stdafx.h"
void main()
{
    int a[N][N]={0},i=0,j,k;     /*先令所有元素都为0*/
      j=(N-1)/2; 
      i=0;
  for(k=1;k<=N*N;)    /*开始处理*/
    {
      if((i<0)&&(j==N))   /*前一个数是第一行第N列时,把下一个数放在上一个数的下面*/
      {
        i=i+2;
        j=j-1;
      }
      else  if(i<0)   /*当行数减到第一行，返回到最后一行*/
       i=N-1;
      else  if(j>N-1)   /*当列数加到最后一行，返回到第一行*/
        j=0;
      else  if(!a[i][j]){     /*如果该元素为0,继续执行程序*/
        a[i][j]=k++;         
        i=i-1;
        j=j+1;
      }
      else     /*如果该元素不为0,就说明要填的数的位置已经被占,则该数放在上一个数的下面*/
      {
        i=i+2;
        j=j-1;
      }
    }
    for(i=0;i<N;i++)   
    {
      for(j=0;j<N;j++)
       printf("%5d",a[i][j]);
      printf("\n\n");
    }
  }