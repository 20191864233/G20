// 68.cpp : Defines the entry point for the console application.
//
#define N 3              /*�ڴ˸ı���ֵ*/
#include  <stdio.h>
#include "stdafx.h"
void main()
{
    int a[N][N]={0},i=0,j,k;     /*��������Ԫ�ض�Ϊ0*/
      j=(N-1)/2; 
      i=0;
  for(k=1;k<=N*N;)    /*��ʼ����*/
    {
      if((i<0)&&(j==N))   /*ǰһ�����ǵ�һ�е�N��ʱ,����һ����������һ����������*/
      {
        i=i+2;
        j=j-1;
      }
      else  if(i<0)   /*������������һ�У����ص����һ��*/
       i=N-1;
      else  if(j>N-1)   /*�������ӵ����һ�У����ص���һ��*/
        j=0;
      else  if(!a[i][j]){     /*�����Ԫ��Ϊ0,����ִ�г���*/
        a[i][j]=k++;         
        i=i-1;
        j=j+1;
      }
      else     /*�����Ԫ�ز�Ϊ0,��˵��Ҫ�������λ���Ѿ���ռ,�����������һ����������*/
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