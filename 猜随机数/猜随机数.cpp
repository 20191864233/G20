// �������.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>

int main(int argc, char* argv[])
{  
	int a,b,t;
	long t1,t2;
	printf("������Ϸ\n");
	system("pause");
	srand(time(0));
	b=1+(rand()%1000);
	t1=clock();
	t=0;

    for(;;)
	{
	printf("����һ��1000���ڵ�����");
	scanf("%d",&a);
	
	    if (a==b)
		{
			printf("��ȷ\n");
			t++;
		    break;
		}
		if (a<b)
		{
			printf("̫С\n");
		    t++;
		}
		if (a>b)
		{
			printf("̫��\n");
		    t++;
		}
    }
	t2=clock();
    printf("��ʱ��%-7.2f��\n",(t2-t1)/(float)CLOCKS_PER_SEC);
	printf("������%d��\n",t);
	system("pause");
    return 0;
}
