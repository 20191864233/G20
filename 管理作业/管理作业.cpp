// ������ҵ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#define N 100
 struct student
{
	char number[11];
	char name[10];
	float score[10];
	float ave;
}stu[N];

int num=100;




void init();
void xiugai();
void tongji();
void chaxun();
void paixv();
void save();
void newfile();
void read1();
void output();
void new1();
void xiugai1();
void xiugaichengji(int x);
void delete1();
int find(char nomb[]);
void tongji1();
void tongji2();
void painumber();
void paiave();
void paidkcj();
void change(int i,int j);
void outputx(int k);
void axhcz();
void axmcz();
int findname(char fname[]);
void panduani(int i);









int main(int argc, char* argv[])
{

	char x;
     init();
	while(1)
	{
		printf("===========��ӭʹ�óɼ�����ϵͳ===========\n");
		printf("           Ŀ¼                           \n");
		printf("1�޸�\n2ͳ��\n3����\n4��ѯ\n5����\n");
       x=getchar();
	   getchar();
	   switch(x)
	   {
	       case'1':xiugai();break;
		   case'2':tongji();break;
		   case'3':paixv();break;
		   case'4':chaxun():break;
		   case'5':save():break;
		   default:printf("û�и�ָ�������ѡ��");
	   }
	}
	return 0;
}

void init()
{
	if(access("stu.dat",0))
	{
		newfile();
	}
	else
	{
		read1();
	}
}
void newfile()
{
	int i;
	FILE*fp;
	if((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("����ʧ�ܣ�������\n");
        exit(0);
	}
	printf("���ݳ�ʼ����.....\n");
	printf("������ѧ��������\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		    printf("ѧ��:");
		gets(stu[i].number);
		    printf("����:");
		gets(stu[i].name);
		    printf("��Ŀ1��");
		scanf("%f",&stu[i].score[0]);
		    printf("��Ŀ2��");
		scanf("%f",&stu[i].score[1]);
		    printf("��Ŀ3��");
		scanf("%f",&stu[i].score[2]);
			printf("��Ŀ4��");
		scanf("%f",&stu[i].score[3]);
			printf("��Ŀ5��");
		scanf("%f",&stu[i].score[4]);
			printf("��Ŀ6��");
		scanf("%f",&stu[i].score[5]);
			printf("��Ŀ7��");
		scanf("%f",&stu[i].score[6]);
			printf("��Ŀ8��");
		scanf("%f",&stu[i].score[7]);
			printf("��Ŀ9��");
		scanf("%f",&stu[i].score[8]);
			printf("��Ŀ10��");
		scanf("%f",&stu[i].score[9]);
			fwrite(&stu[i],sizeof(struct student),1,fp);
	}
		fclose(fp);
		output();
}



void read1()
{
	FILE *fp;
	num=0;
	fp=fopen("stu.dat","r");
	if(fp==NULL)
	{
		printf("�ļ������ڣ�������");
			exit(0);
	}
	while(!feof(fp))
	{
		fread(&stu[num],1,sizeof(struct student),fp);
		num++;
	}
	fclose(fp);
	output();
}
			
void output()
{
	int i,j;
	printf("ѧ�ţ���������Ŀ1����Ŀ2����Ŀ3����Ŀ4����Ŀ5����Ŀ6����Ŀ7����Ŀ8����Ŀ9����Ŀ10\n");
	for(i=0;i<num;i++)
	{
		printf("%s %s ",stu[i].number,stu[i].name);
	
	  for(j=0;j<10;j++)
	  {
		printf("%.1f",stu[i].score[j]);
	    printf("\n");
	  }
	}
		
	
}


void xiugai()
{
	char c1;
	while(1)
	{
		printf("         �޸�        \n");
       printf("        1.����         \n");
       printf("        2.�޸�         \n");
	   printf("        3.ɾ��         \n");
	   printf("        9.����         \n");
	   printf(" ��ѡ��\n");
	   c1=getchar();
	   getchar();
	   if(c1=='9')
	   {
		   break;
	   }
	   switch(c1)
	   {
	   case'1':new1();break;
	   case'2':xiugai1();break;
	   case'3':delete1();break;  
       default:printf("����������\n");
	   }
	}
}



void new1()
{
 printf("����\n");
	gets(stu[num].number);
 printf("������ѧ��\n");
	gets(stu[num].number);
 printf("�������Ŀ1�ĳɼ�\n");
	scanf("%f",&stu[num].score[0]);
 printf("�������Ŀ2�ĳɼ�\n");
	scanf("%f",&stu[num].score[1]);
 printf("�������Ŀ3�ĳɼ�\n");
	scanf("%f",&stu[num].score[2]);
 printf("�������Ŀ4�ĳɼ�\n");
	scanf("%f",&stu[num].score[3]);
 printf("�������Ŀ5�ĳɼ�\n");
	scanf("%f",&stu[num].score[4]);
 printf("�������Ŀ6�ĳɼ�\n");
	scanf("%f",&stu[num].score[5]);
 printf("�������Ŀ7�ĳɼ�\n");
	scanf("%f",&stu[num].score[6]);
 printf("�������Ŀ8�ĳɼ�\n");
	scanf("%f",&stu[num].score[7]);
 printf("�������Ŀ9�ĳɼ�\n");
	scanf("%f",&stu[num].score[8]);
 printf("�������Ŀ10�ĳɼ�\n");
	scanf("%f",&stu[num].score[9]);
    num++;
	output();
}



void xiugai1()
{
	char g[11];
	int i;
	printf("�����Ӧѧ����ѧ��\n");
		gets(g);
	for(i=0;i<num;i++)
	{
		if(strcmp(stu[i].number,g)==0)
		{
			break;
		
		if(i==num)
		{
			printf("�����ļ���û�и�����Ϣ��������������ȷѧ��\n");
		    return;
		}
      	xiugaichengji(i);	

		}
	}
}

void xiugaichengji(int x)
{
	char l;
	int j,k;
	for(;;)
	{
		printf("\n");
		printf("      �ɼ�       \n");
		printf("     1 ��Ŀ1     \n");
		printf("     2 ��Ŀ2     \n");
	    printf("     3 ��Ŀ3     \n");
      	printf("     4 ��Ŀ4     \n");
    	printf("     5 ��Ŀ5     \n");
	    printf("     6 ��Ŀ6     \n");
    	printf("     7 ��Ŀ7     \n");
    	printf("     8 ��Ŀ8     \n");
    	printf("     9 ��Ŀ9     \n");
    	printf("     10 ��Ŀ10    \n");
	    printf("     11 ����      \n");
        printf("    ��ѡ��       \n");
		l=getchar();
		getchar();
		if(l=='11')
			break;
		else if(l>='1'&&l<='10')
		{
			k=l-49;
			printf("������ɼ�:\n");
			scanf("%f",&stu[x].score[k]);
			printf("ѧ�� ��������Ŀ1 ��Ŀ2 ��Ŀ3 ��Ŀ4 ��Ŀ5 ��Ŀ6 ��Ŀ7 ��Ŀ8 ��Ŀ9 ��Ŀ10\n");
			printf("%s %s",stu[x].number,stu[x].name);
			for(j=0;j<10;j++)
			{
				printf("%.1f",stu[x].score[j]);
					printf("\n");
			}
	         if(l<=0||l>=11)
			  {		
			    printf("ѡ�������ѡ��");
		          break;
			  }
		}
	}
}
void delete1()
{
	char nom[11];
	int i,j;
	printf("����ѧ��\n");
		gets(nom);
	i=find(nom);
	if(i!=-1)
	{
		for(j=i;j<num;j++)
		{
			stu[j]=stu[j+1];
		}
			num--;
		printf("������%d��ѧ���ɼ�:\n",num);
		output();
	}
	else
	{
		printf("��������ȷѧ��:\n");
	}
}

int find(char nomb[])
{
	int i;
	for(i=0;i<num;i++)
		if(strcmp(stu[i].number,nomb)==0)
		{
			return i;
		}
		return -1;
}


void tongji()
{
	int i;
	char c2;
	while(1)
	{
		printf(" *                 ͳ��                *\n");
		printf(" *            1.ѧ��ƽ����             *\n");
		printf(" *            2.�γ�ƽ����             *\n");
		printf(" *            9.����                   *\n");
		c2=getchar();
		getchar();
		if(c2=='9')
		{
			break;
		}
		switch(c2)
		{
		case'1':tongji1();break;
		case'2':tongji2();break;
		default:printf("ѡ��Ƿ�������ѡ��");
		}
	}
}

void tongji1()
{
	int i,j;
	for(i=0;i<num;i++)
	{
		stu[i].ave=0;
		for(j=0;j<10;j++)
		{
			stu[i].ave+=stu[i].score[j];
			stu[i].ave=stu[i].ave/5;
		}
	}
	printf("ѧ��ƽ���ɼ�\n");
		printf("   ѧ��   ����  ƽ����\n");
		for(i=0;i<num;i++)
		{
			printf("%s %s %.2f\n",stu[i].number,stu[i].name,stu[i].ave);
		}
}


void tongji2()
{   
	int i,j;
	float sum;
	float aver[10];
	for(j=0;j<5;j++)
	{
		sum=0;
		for(i=0;i<num;i++)
		{
			sum+=stu[i].score[j];
			aver[j]=sum/num;
		}
	}
		printf("����ƽ���֣�\n");
			for(i=0;i<5;i++)
			{
				printf("%-7.2f",aver[i]);
				printf("\n");
			}
	
}



void paixv()
{
	char c3;
	for(;;)
	{
		printf("\n\n\n");
		printf(" *            ����                           *\n");
		printf(" *            1.��ѧ����                     *\n");
		printf(" *            2.��ƽ������                   *\n");
		printf(" *            3.�����Ƴɼ���                 *\n");
		printf(" *            4.����                         *\n");
		c3=getchar();
		getchar();
		if(c3=='4')
		{
			break;
		}
		switch(c3)
		{
		case'1':painumber();break;
		case'2':paiave():break;
		case'3':paidkcj():break;
		default:printf("����������\n");

		}
	}
}






void painumber()
{
	int i,j;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-1;j++)
		{
		if(strcmp(stu[i].number,stu[j+1].number)>0)
			change(j,j+1);

		}
	}
		printf("   ѧ��   ����  ƽ���� ����\n");
		for(i=0;i<num;i++)
		{
			printf("%s %s %.2f %d\n",stu[i].number,stu[i].name,stu[i].ave,i+1);
		}
	

}



void paiave()
{
	int i,j;
	tongji1();
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-1;j++)
		{
			if(stu[j].ave<stu[j+1].ave)
			{
				change(j,j+1);
			}
		}
	}
		printf("   ѧ��   ����  ƽ���� ����\n");
		for(i=0;i<num;i++)
		{
			printf("%s %s %.2f %d\n",stu[i].number,stu[i].name,stu[i].ave,i+1);
		}
}




void paidkcj()
{
	char c;
	int i,j,k;
	while(1)
	{
	  printf("\n");
	
	  	printf("\n");
		printf("      �ɼ�       \n");
		printf("     1 ��Ŀ1     \n");
		printf("     2 ��Ŀ2     \n");
	    printf("     3 ��Ŀ3     \n");
      	printf("     4 ��Ŀ4     \n");
    	printf("     5 ��Ŀ5     \n");
	    printf("     6 ��Ŀ6     \n");
    	printf("     7 ��Ŀ7     \n");
    	printf("     8 ��Ŀ8     \n");
    	printf("     9 ��Ŀ9     \n");
    	printf("     10 ��Ŀ10    \n");
	    printf("     11 ����      \n");
        printf("    ��ѡ��       \n");
      c=getchar();
	  getchar();
		if(c=='11')
		{
			break;
		}
		else if(c>='1'&&c<='10')
		{
			k=c-49;
	       for(i=0;i<num;i++)
		   {
		     for(j=0;j<num-1;j++)
			 {
			if(stu[j].score[k]<stu[j+1].score[k])
			{
				change(j,j+1);
			}
			outputx(k);
			 }
		   }
		}
		else printf("��������ѡ��");
	}
}






void change(int i,int j)
{
	struct student temp;
    temp=stu[i];
	stu[i]=stu[j];
	stu[j]=temp;
}






void outputx(int k)
{

	char xueke[10][10]={" ��Ŀ1" , "��Ŀ2"," ��Ŀ3"," ��Ŀ4" ,"��Ŀ5" ,"��Ŀ6" ," ��Ŀ7"  , "��Ŀ8" , " ��Ŀ9" , " ��Ŀ10 "};
	char (*p)[10];
	int i;
	p=xueke;
        printf("   ѧ��   ����   ����\n");
		for(i=0;i<num;i++)
		{
			printf("%s %s %.2f %d\n",stu[i].number,stu[i].name,i+1);
		}
}






void chaxun()
{
	char c4;

	
	while(1)
	{

	    printf(" *              ��ѯ                         *\n");
		printf(" *            1.��ѧ�Ų�ѯ                   *\n");
		printf(" *            2.��������ѯ                   *\n");
		printf(" *            4.����                         *\n");
        c4=getchar();
		getchar();
		if(c4=='4')
		{
			break;
		}
		switch(c4)
		{
		case'1':axhcz();break;
		case'2':axmcz():break;
		
		default:printf("����������\n");
		}
	}
}


void axhcz()
{	
	char fnum[11];
	int i;
	printf("����ѧ�ţ�");
	gets(fnum);
	i=find(fnum);
	panduani(i);
	
}



void axmcz()
{   
	int i;
	char fname[10];
	printf("����������");
	gets(fname);
	i=findname(fname);
	panduani(i);
	
}


int findname(char fname[])
{
	int i;
		for(i=0;i<num;i++)
		{
			if(strcmp(stu[i].name,fname)==0)
			{
				return i;
			}
			return -1;
		}
}


void panduani(int i)
{
	int j;
	if(i=-1)
	{
		printf("����ʧ�ܣ������ڣ�\n");
		
	}

	else
	{
		printf("������ϢΪ��\n");
         printf("ѧ�ţ���������Ŀ1����Ŀ2����Ŀ3����Ŀ4����Ŀ5����Ŀ6����Ŀ7����Ŀ8����Ŀ9����Ŀ10\n");
     	printf("%s %s ",stu[i].number,stu[i].name);
	  for(j=0;j<10;j++)
	  {
		printf("%.1f",stu[i].score[j]);
	    printf("\n");
	  }
	}
}


void save()
{
	int i;
	FILE*fp;
	if((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("����ʧ�ܣ�������\n");
        exit(0);
	}
	for(i=0;i<num;i++)
		fwrite(&stu[i],sizeof(struct student),1,fp);
	fclose(fp);
}




