// 709.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tongji(char [],int n);





int main(int argc, char* argv[])
{   
	int strlength;
	char str[81] ;
     printf("���������֣�\n");
    gets(str);
   strlength=strlen(str);
    tongji(str ,strlength);
      system("pause");
		return 0;
}




void tongji(char  str [] ,int n)
{
int i, j,a,b,c,d,other;
char newstr[81];
a = b = c = d = other = 0;
  for(i=0 ,j=0;i<n;i++,j++)
  {
	  newstr[j]=str[i];
  }




 for (j = 0;j<n ; j++)
 {
   if (newstr[j] >= 'A' && str[j] <= 'Z')
   {
	a++;
   }
   else if (newstr[j] >= 'a' && str[j] <= 'z')
   {
	   b++;
   }
   else if (newstr[j] >='0' && str[j] <= '9')
   {
       c++;
   }
   else if (newstr[j]==' ')
   {
	   d++;
   }
   else
   {
	   other++;
   }
  }

printf("�����������У�\n");
printf("��д��ĸ��%d\n", a);
printf("Сд��ĸ��%d\n", b);
printf("���֣�%d\n", c);
printf("�ո�%d\n", d);
printf("�����ַ���%d\n", other);


}