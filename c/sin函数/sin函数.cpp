// sin����.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <math.h>
#include <iostream>
#define PI 3.14159

int main()
{
    double y;                   //������y
    double x,m;                    //������x
    for(y = 0;y >= -1;y -= 0.1)  //����0~PI������y��0~-1������Ϊ0.1
    {
	    m=asin(-y)*10;           //����math.h�еķ����Һ��������Ӧ�������ֵ
        for(x = 1;x < m;x++)    //��ʼ���д��
            printf(" ");        //�����߶����Ҳ࣬��ӡ�ո�
        printf("*");            //��һ�����߶����ӡ��*��
        for(;x < 31-m;x++)      //��ʼ��ӡ�Գ����߶��㣬����0~PI�ĶԳ���x����ֵΪ31-m
            printf(" ");        //��������֮���ӡ�ո�
        printf("*\n");          //�ڶ������߶����ӡ��*����������
    }
    for(y = 1;y >= 0;y -= 0.1)
    {
		m=(PI + asin(y))*10;     
        for(x = 1;x < m;x++)
            printf(" ");
        printf("*");
        for(;x < (62-(m-31));x++)
            printf(" ");
        printf("*\n");
    }
	system("pause");
    return 0;

}

