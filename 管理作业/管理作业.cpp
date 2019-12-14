// 管理作业.cpp : Defines the entry point for the console application.
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
		printf("===========欢迎使用成绩管理系统===========\n");
		printf("           目录                           \n");
		printf("1修改\n2统计\n3排序\n4查询\n5保存\n");
       x=getchar();
	   getchar();
	   switch(x)
	   {
	       case'1':xiugai();break;
		   case'2':tongji();break;
		   case'3':paixv();break;
		   case'4':chaxun():break;
		   case'5':save():break;
		   default:printf("没有该指令，请重新选择");
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
		printf("创建失败，请重试\n");
        exit(0);
	}
	printf("数据初始化中.....\n");
	printf("请输入学生人数：\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		    printf("学号:");
		gets(stu[i].number);
		    printf("姓名:");
		gets(stu[i].name);
		    printf("科目1：");
		scanf("%f",&stu[i].score[0]);
		    printf("科目2：");
		scanf("%f",&stu[i].score[1]);
		    printf("科目3：");
		scanf("%f",&stu[i].score[2]);
			printf("科目4：");
		scanf("%f",&stu[i].score[3]);
			printf("科目5：");
		scanf("%f",&stu[i].score[4]);
			printf("科目6：");
		scanf("%f",&stu[i].score[5]);
			printf("科目7：");
		scanf("%f",&stu[i].score[6]);
			printf("科目8：");
		scanf("%f",&stu[i].score[7]);
			printf("科目9：");
		scanf("%f",&stu[i].score[8]);
			printf("科目10：");
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
		printf("文件不存在，请重试");
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
	printf("学号，姓名，科目1，科目2，科目3，科目4，科目5，科目6，科目7，科目8，科目9，科目10\n");
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
		printf("         修改        \n");
       printf("        1.新增         \n");
       printf("        2.修改         \n");
	   printf("        3.删除         \n");
	   printf("        9.返回         \n");
	   printf(" 请选择\n");
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
       default:printf("请重新输入\n");
	   }
	}
}



void new1()
{
 printf("姓名\n");
	gets(stu[num].number);
 printf("请输入学号\n");
	gets(stu[num].number);
 printf("请输入科目1的成绩\n");
	scanf("%f",&stu[num].score[0]);
 printf("请输入科目2的成绩\n");
	scanf("%f",&stu[num].score[1]);
 printf("请输入科目3的成绩\n");
	scanf("%f",&stu[num].score[2]);
 printf("请输入科目4的成绩\n");
	scanf("%f",&stu[num].score[3]);
 printf("请输入科目5的成绩\n");
	scanf("%f",&stu[num].score[4]);
 printf("请输入科目6的成绩\n");
	scanf("%f",&stu[num].score[5]);
 printf("请输入科目7的成绩\n");
	scanf("%f",&stu[num].score[6]);
 printf("请输入科目8的成绩\n");
	scanf("%f",&stu[num].score[7]);
 printf("请输入科目9的成绩\n");
	scanf("%f",&stu[num].score[8]);
 printf("请输入科目10的成绩\n");
	scanf("%f",&stu[num].score[9]);
    num++;
	output();
}



void xiugai1()
{
	char g[11];
	int i;
	printf("输入对应学生的学号\n");
		gets(g);
	for(i=0;i<num;i++)
	{
		if(strcmp(stu[i].number,g)==0)
		{
			break;
		
		if(i==num)
		{
			printf("数据文件上没有该生信息！请重新输入正确学号\n");
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
		printf("      成绩       \n");
		printf("     1 科目1     \n");
		printf("     2 科目2     \n");
	    printf("     3 科目3     \n");
      	printf("     4 科目4     \n");
    	printf("     5 科目5     \n");
	    printf("     6 科目6     \n");
    	printf("     7 科目7     \n");
    	printf("     8 科目8     \n");
    	printf("     9 科目9     \n");
    	printf("     10 科目10    \n");
	    printf("     11 返回      \n");
        printf("    请选择       \n");
		l=getchar();
		getchar();
		if(l=='11')
			break;
		else if(l>='1'&&l<='10')
		{
			k=l-49;
			printf("请输入成绩:\n");
			scanf("%f",&stu[x].score[k]);
			printf("学号 姓名，科目1 科目2 科目3 科目4 科目5 科目6 科目7 科目8 科目9 科目10\n");
			printf("%s %s",stu[x].number,stu[x].name);
			for(j=0;j<10;j++)
			{
				printf("%.1f",stu[x].score[j]);
					printf("\n");
			}
	         if(l<=0||l>=11)
			  {		
			    printf("选择错误，重选。");
		          break;
			  }
		}
	}
}
void delete1()
{
	char nom[11];
	int i,j;
	printf("输入学号\n");
		gets(nom);
	i=find(nom);
	if(i!=-1)
	{
		for(j=i;j<num;j++)
		{
			stu[j]=stu[j+1];
		}
			num--;
		printf("现在有%d个学生成绩:\n",num);
		output();
	}
	else
	{
		printf("请输入正确学号:\n");
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
		printf(" *                 统计                *\n");
		printf(" *            1.学生平均分             *\n");
		printf(" *            2.课程平均分             *\n");
		printf(" *            9.返回                   *\n");
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
		default:printf("选择非法，请重选。");
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
	printf("学生平均成绩\n");
		printf("   学号   姓名  平均分\n");
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
		printf("各科平均分：\n");
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
		printf(" *            排序                           *\n");
		printf(" *            1.按学号排                     *\n");
		printf(" *            2.按平均分排                   *\n");
		printf(" *            3.按单科成绩排                 *\n");
		printf(" *            4.返回                         *\n");
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
		default:printf("错误，请重来\n");

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
		printf("   学号   姓名  平均分 排名\n");
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
		printf("   学号   姓名  平均分 排名\n");
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
		printf("      成绩       \n");
		printf("     1 科目1     \n");
		printf("     2 科目2     \n");
	    printf("     3 科目3     \n");
      	printf("     4 科目4     \n");
    	printf("     5 科目5     \n");
	    printf("     6 科目6     \n");
    	printf("     7 科目7     \n");
    	printf("     8 科目8     \n");
    	printf("     9 科目9     \n");
    	printf("     10 科目10    \n");
	    printf("     11 返回      \n");
        printf("    请选择       \n");
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
		else printf("错误，重新选择。");
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

	char xueke[10][10]={" 科目1" , "科目2"," 科目3"," 科目4" ,"科目5" ,"科目6" ," 科目7"  , "科目8" , " 科目9" , " 科目10 "};
	char (*p)[10];
	int i;
	p=xueke;
        printf("   学号   姓名   排名\n");
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

	    printf(" *              查询                         *\n");
		printf(" *            1.按学号查询                   *\n");
		printf(" *            2.按姓名查询                   *\n");
		printf(" *            4.返回                         *\n");
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
		
		default:printf("错误，请重来\n");
		}
	}
}


void axhcz()
{	
	char fnum[11];
	int i;
	printf("输入学号：");
	gets(fnum);
	i=find(fnum);
	panduani(i);
	
}



void axmcz()
{   
	int i;
	char fname[10];
	printf("输入姓名：");
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
		printf("查找失败，不存在；\n");
		
	}

	else
	{
		printf("查找信息为：\n");
         printf("学号，姓名，科目1，科目2，科目3，科目4，科目5，科目6，科目7，科目8，科目9，科目10\n");
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
		printf("创建失败，请重试\n");
        exit(0);
	}
	for(i=0;i<num;i++)
		fwrite(&stu[i],sizeof(struct student),1,fp);
	fclose(fp);
}




