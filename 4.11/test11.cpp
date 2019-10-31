// test11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void larger (int a,int b,int c,int d);


int main(int argc, char* argv[])
{
	int n1,n2,n3,n4;

	printf("输入四个整数\n");

	printf("n1=");
	    scanf("%d",&n1);
	printf("n2=");
	    scanf("%d",&n2);
	printf("n3=");
	    scanf("%d",&n3);
	printf("n4=");
	    scanf("%d",&n4);

	larger (n1,n2,n3,n4);

	system("pause");
	return 0;
}




void larger (int a,int b,int c,int d)
{
	int l1,s1,l2,s2,l3,s3,l11,s11,l12,s12,l111,s111;

	if (a>b)
		l1=a,s1=b;
	else l1=b,s1=a;
	    if (l1>c)
			l2=l1,s2=c;
		else l2=c,s2=l1;
		    if (l2>d)
				l3=l2,s3=d;
			else l3=d,s3=l2;
			    if (s1>s2)
					l11=s1,s11=s2;
				else l11=s2,s11=s1;
				    if(l11>s3)
						l12=l11,s12=s3;
					else l12=s3,s12=l11;
					    if (s11>s12)
							l111=s11,s111=s12;
						else l111=s12,s111=s11;


	printf("从小到大输出：%d<%d<%d<%d\n",s111,l111,l12,l3);
}