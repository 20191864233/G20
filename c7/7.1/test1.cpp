// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


void gcd(int a,int b);
void lcm(int a,int b);


int main(int argc, char* argv[])
{
	int x,y;
	printf("����x,y:");
	scanf("%d %d",&x,&y);

	gcd(x,y);
	lcm(x,y);

	return 0;
}




void gcd (int a,int b)
{
	int mid;
	if (a<b)
	{
		mid=b;
		b=a;
		a=mid;
	}

	int i,gcd;
	for (i=b;i>=1;i--)
	{
		if (a%i==0)
		{
			if (b%i==0)             //��Ҫ��Ϊʲô����"&&"���Լ�ȥ���Ծ�������
			{
				gcd=i;
				break;
			}
		}
	}

	printf("���Լ����%d",gcd);
}




void lcm(int a,int b)
{
	int mid;
	if (a<b)
	{
		mid=b;
		b=a;
		a=mid;
	}

	int i,lcm;
	for (i=a;i<=a*b;i++)
	{
		if (i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
	}
	printf("��С��������%d",lcm);
}
