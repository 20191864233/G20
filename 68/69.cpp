// 69.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>


int main()
{
    int a[100][100] = {0};
    int n,i;
    int row = 0,col = 0;    //������� �� 
    scanf("%d\n",&n);
    for( i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //Ѱ�Ұ���
    int max,min;
    for( i = 0; i < n; i++){
        max = a[i][0];
        for(int j = 0; j < n;j++){
            if(a[i][j] > max){
                max = a[i][j];
                 col = j;
            } 
        }
        min = a[0][col];
        for(int k=0; k < n; k++){
            if( a[k][col] < min ){
                min = a[k][col];
                 row = k;
            }   
        }
        //��ǰ�е����ֵ �� ��ǰ�е���Сֵ 
        if( min == max ){
            printf("%d %d\n",row,col);
            break;
        }
    }
    //�Ҳ������� ���NO 
    if( min != max ){
        printf("NO");
    }
    return 0;
}

