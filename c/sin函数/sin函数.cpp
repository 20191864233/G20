// sin函数.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <math.h>
#include <iostream>
#define PI 3.14159

int main()
{
    double y;                   //纵坐标y
    double x,m;                    //横坐标x
    for(y = 0;y >= -1;y -= 0.1)  //先求0~PI，纵轴y从0~-1，步长为0.1
    {
	    m=asin(-y)*10;           //利用math.h中的反正弦函数，求对应横坐标的值
        for(x = 1;x < m;x++)    //开始逐行打点
            printf(" ");        //在曲线定点右侧，打印空格
        printf("*");            //第一个曲线定点打印“*”
        for(;x < 31-m;x++)      //开始打印对称曲线定点，由于0~PI的对称性x的终值为31-m
            printf(" ");        //在两定点之间打印空格
        printf("*\n");          //第二个曲线定点打印“*”，并换行
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

