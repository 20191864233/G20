// 716.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char s[81];
	int date=0,i=0,len,temp;
	printf("请输入字符串：\n");
	gets(s);
	len = strlen(s) - 1;
	while(s[len]!='\0') {
		if(s[len]>='0'&&s[len]<='9') {
			temp = (s[len]-'0')*pow(16,i);
			date = date + temp;
		}
		if(s[len]>='a'&&s[len]<='f') {
			temp = (s[len]-'a'+10)*pow(16,i);
			date = date + temp;
		}
		if(s[len]>='A'&&s[len]<='F') {
			temp = (s[len]-'A'+10)*pow(16,i);
			date = date + temp;
		}
		len--;
		i++;
	}
	printf("字符串%s\n转换成十进制数为%d\n",s,date);
	system("pause");
	return 0;
}
