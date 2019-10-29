// 猜随机数.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>

int main(int argc, char* argv[])
{  
	int a,b,t;
	long t1,t2;
	printf("猜数游戏\n");
	system("pause");
	srand(time(0));
	b=1+(rand()%1000);
	t1=clock();
	t=0;

    for(;;)
	{
	printf("输入一个1000以内的数：");
	scanf("%d",&a);
	
	    if (a==b)
		{
			printf("正确\n");
			t++;
		    break;
		}
		if (a<b)
		{
			printf("太小\n");
		    t++;
		}
		if (a>b)
		{
			printf("太大\n");
		    t++;
		}
    }
	t2=clock();
    printf("用时：%-7.2f秒\n",(t2-t1)/(float)CLOCKS_PER_SEC);
	printf("次数：%d次\n",t);
	system("pause");
    return 0;
}
