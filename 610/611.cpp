// 611.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
int main()
{
int i, j,a,b,c,d,other;

a = b = c = d = other = 0;
char str[3][80] ;
printf("�������������֣�\n");
for (i = 0; i < 3; i++)
{
    gets(str[i]);
 for (j = 0; (str[i][j]) != '\n'&& j < 80; j++)
 {
   if (str[i][j] >= 'A' && str[i][j] <= 'Z')
   {
	a++;
   }
   else if (str[i][j] >= 'a' && str[i][j] <= 'z')
   {
	   b++;
   }
   else if (str[i][j] >=0 && str[i][j] >= 9)
   {
       c++;
   }
   else if (str[i][j]==' ')
   {
	   d++;
   }
   else
   {
	   other++;
   }
  }
}
printf("�������������У�\n");
printf("��д��ĸ��%d\n", a);
printf("Сд��ĸ��%d\n", b);
printf("���֣�%d\n", c);
printf("�ո�%d\n", d);
printf("�����ַ���%d\n", other);

system ("pause");
return 0;
}
