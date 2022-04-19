#include<stdio.h>
#include<string.h>
#define N 10
#include<stdlib.h>
int renum;
struct Staff
{
	char zgh[15];
	char xm[15];
	int jbgz;
	int zwgz;
	int jt;
	int ylbx;
    int  gjj;
	int  sdf;
	int  yfgz;
	int sfgz;
	
};
struct Staff staffs[10];


void menu()
{
	
		printf("----------------职工工资管理系统------------------\n");
		printf("|         1.职工信息录入                         |\n");
		printf("|         2.职工号查询                           |\n");
		printf("|         3.姓名信息查询                         |\n");
		printf("|         4.基本工资小于1000                     |\n");
		printf("|         5.计算实发工资、应发工资               |\n");
		printf("|         6.添加职工信息                         |\n");
		printf("|         7.修改职工信息                         |\n");
		printf("|         8.删除职工信息                         |\n");
		printf("|         9.按基本工资排序（降序）               |\n");
		printf("|         10.计算各项工资平均值                  |\n");
		printf("|         11.退出系统                            |\n");
		printf("--------------------------------------------------\n");
	
}
//录入信息
void One(){

int i=0;
char str[80];
FILE *fp;
    fp=fopen("jy6200335.txt","r");
if(fp==NULL)
  printf("文件打开失败");
fgets(str,80,fp);                                                                                                                                                      
printf("职工号	姓名	基本工资	职务工资	津贴	医疗保险	公积金	水电费	应发工资	实发工资\n");
while(!feof(fp))
{
	fscanf(fp,"%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,&staffs[i].jbgz,&staffs[i].zwgz,&staffs[i].jt,&staffs[i].ylbx,&staffs[i].gjj,&staffs[i].sdf,&staffs[i].yfgz,&staffs[i].sfgz);
	printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
	i++;
}
renum=i;
}
//职工号
void Two(){
	int i=0;
	char num[15];
	int flag=1;
	printf("请输入职工号");
    scanf("%s",num);
	for(i=0;i<renum;i++){
if(strcmp(staffs[i].zgh,num)==0)
	{printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
	flag=0;}
}
	if(flag)
printf("查找的职工号不存在\n");
	}

//姓名
void  Three(){
		int i=0;
	char num[15];
	int flag=1;
	printf("请输入姓名");
    scanf("%s",num);
	for(i=0;i<renum;i++){
if(strcmp(staffs[i].xm,num)==0)
	{printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
	flag=0;}
}
	if(flag)
printf("查找的姓名不存在\n");
}
//基本工资小于1000
void Four(){
	{int i;
fflush(stdin);
printf("职工号	姓名	基本工资	职务工资	津贴	医疗保险	公积金	水电费	应发工资	实发工资\n");
for(i=0;i<renum;i++)
{

if(staffs[i].jbgz<=1000)
{
printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
}
}
printf("\n符合条件的信息读取成功!\n");
return;
}
}

//计算实发工资、应发工资
void Five(){
		FILE *fp;
	int i;
	if ((fp = fopen("GZ6200335.txt", "w")) == NULL)
	{
		printf("创建工资文件夹失败！");
	}
	fprintf(fp, "职工号	姓名	基本工资		职务工资		津贴	医疗保险		公积金	水电费	应发工资		实发工资\n");
	for (i = 0; i < renum; i++)
	{
		fprintf(fp, "%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
			staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].jbgz + staffs[i].zwgz + staffs[i].jt, staffs[i].jbgz + staffs[i].zwgz + staffs[i].jt
			-staffs[i].ylbx-staffs[i].gjj-staffs[i].sdf);
	}
	fclose(fp);
	printf("\n工资写入成功\n!");
}

//添加
void  Six(){
	int flag=1;
	int i=0;
	char name[15];
	int jz;
	FILE *fp;
	fp=fopen("jy6200335.txt","a+");
	
	printf("请输入新职工信息：\n");
	printf("职工号:");
	scanf("%s",name);
	
	for(i=0;i<renum;i++)
	{
	if(strcmp(staffs[i].zgh,name)==0)
	{
	printf("职工号已存在！");
	flag=0;
	}	
	}
	if(flag)
	{
		printf("请输入职工号:");
	    scanf("%s",name);
		strcpy(staffs[renum].zgh,name);

		printf("请输入姓名：");
		scanf("%s",name);
		strcpy(staffs[renum].xm,name);

		printf("请输入基本工资：");
		scanf("%d",&jz);
		staffs[renum].jbgz=jz;

		printf("请输入职务工资：");
		scanf("%d",&jz);
		staffs[renum].zwgz=jz;

		printf("请输入津贴：");
		scanf("%d",&jz);
		staffs[renum].jt=jz;

		printf("请输入医疗保险：");
		scanf("%d",&jz);
		staffs[renum].ylbx=jz;

		printf("请输入公积金：");
		scanf("%d",&jz);
		staffs[renum].gjj=jz;

       	printf("请输入水电费：");
		scanf("%d",&jz);
		staffs[renum].sdf=jz;







		
fprintf(fp,"%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[renum].zgh,staffs[renum].xm,staffs[renum].jbgz,staffs[renum].zwgz,staffs[renum].jt,staffs[renum].ylbx,staffs[renum].gjj,staffs[renum].sdf,staffs[renum].yfgz,staffs[renum].sfgz);
	
}
	printf("添加成功\n");
		fclose(fp);
}


//修改
void Seven(){
    
    int n,i;
	char str[10];
     num:
	printf("请输入序号：");
	scanf("%d", &n);
	if (n<1 || n>N)
	{
		printf("序号错误，请输入介于1-%d", N);
		goto num;
	}

	printf("\n您选择的人是\n职工号	姓名	基本工资	职务工资	津贴	医疗保险	公积金	水电费	应发工资	实发工资\n");
	printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[n-1].zgh, staffs[n-1].xm, staffs[n-1].jbgz, staffs[n-1].zwgz,
		staffs[n-1].jt, staffs[n-1].ylbx,staffs[n-1].gjj, staffs[n-1].sdf, staffs[n-1].yfgz, staffs[n-1].sfgz);
	printf("姓名：");
	scanf("%s", str);
	strcpy(staffs[n - 1].xm, str);
	printf("基本工资：");
	scanf("%d", &i);
	staffs[n- 1].jbgz=i;
	printf("职务工资：");
	scanf("%d", &i);
	staffs[n - 1].zwgz = i;
	printf("津贴：");
	scanf("%d", &i);
	staffs[n - 1].jt = i;
	printf("医疗保险：");
	scanf("%d", &i);
	staffs[n - 1].ylbx = i;
	printf("公积金：");
	scanf("%d", &i);
	staffs[n - 1].gjj = i;
	printf("水电费：");
	scanf("%d", &i);
	staffs[n - 1].sdf = i;

	printf("\n修改后的信息为：\n职工号	姓名	基本工资	职务工资	津贴	医疗保险	公积金	水电费	应发工资	实发工资\n");
	printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[n - 1].zgh, staffs[n - 1].xm, staffs[n - 1].jbgz, staffs[n - 1].zwgz,
		staffs[n - 1].jt, staffs[n - 1].ylbx, staffs[n - 1].gjj, staffs[n - 1].sdf, staffs[n - 1].yfgz, staffs[n - 1].sfgz);
}
//删除
void Eight(){
FILE *fp;
	int i, j;
	char Name[20] = "";
	int flag= 0;
Loop:
	printf("请输入人名：\n");
	scanf("%s", Name);
	for (i = 0; i < renum + 1; i++)
	{
		if (!strcmp(Name, staffs[i].xm))
		{
			for (j = i; j < renum - 1; j++)
				staffs[j] = staffs[j + 1];
			flag = 1;
		}
	}
	if (!flag)
	{
		printf("未找到该人！\n");
		goto Loop;
	}
	if ((fp = fopen("jy6200335-副本（删除）.txt", "w")) == NULL)
	{
		printf("创建副本失败 ！");
	}
	printf("删除后的状态为:\n");
	printf("职工号	姓名	基本工资	职务工资	津贴	医疗保险	公积金	水电费	应发工资	实发工资\n");
	fprintf(fp,"职工号	姓名	基本工资	职务工资	津贴	医疗保险	公积金	水电费	应发工资	实发工资\n");
	for (i = 0; i < renum - 1; i++)
	{

			fprintf(fp, "%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
			printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	fclose(fp);
	printf("删除成功！\n");
}
//基本工资排序
void Nine(){

	int i,j;
	struct Staff temp;
	FILE *fp;
	fp=fopen("GZ6200335.txt","w");
	for(i=0;i<renum;i++)
	{
		for(j=0;j<renum-1;j++)
		{
		      if(staffs[j].jbgz>staffs[j+1].jbgz)
			{
				temp=staffs[j];
			    staffs[j]=staffs[j+1];
				staffs[j+1]=temp;
			}
		}
	}
	fprintf(fp, "职工号	姓名	基本工资		职务工资		津贴	医疗保险		公积金	水电费	应发工资		实发工资\n");
	for(i=0;i<renum;i++)
	{
	fprintf(fp, "%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
				staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	printf("排序成功\n");
	fclose(fp);
}

void Ten(){
//先读取工资文件
	FILE *fp;
	int i,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
	double AVG1,AVG2,AVG3,AVG4,AVG5,AVG6,AVG7,AVG8; //平均值
	//读取信息
	if ((fp = fopen("GZ6200335.txt", "r")) == NULL)
	{
		printf("职工信息文件打开错误！\n");
		return;
	}
	fscanf(fp, "%s%s%s%s%s%s%s%s%s%s\n", staffs[0].xm, staffs[0].xm,staffs[0].xm,staffs[0].xm,staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm);
	printf("\n职工号 姓名   基本工资 职务工资  津贴 医疗保险 公积金  水电费  应发工资（总和） 实发工资\n");
	for (i = 0; i < renum; i++)
	{
		fscanf(fp, "%s%s%d%d%d%d%d%d%d%d\n", staffs[i].zgh, staffs[i].xm, &staffs[i].jbgz, &staffs[i].zwgz,
			&staffs[i].jt, &staffs[i].ylbx, &staffs[i].gjj, &staffs[i].sdf, &staffs[i].yfgz, &staffs[i].sfgz);
		printf("%-6s%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n", staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	printf("\n\n职工信息文件读取成功！\n\n");
	fclose(fp);
	printf("\n职工号 姓名   基本工资 职务工资  津贴 医疗保险 公积金  水电费  应发工资（总和） 实发工资\n");
	for (i = 0; i < renum; i++)
	{
		printf("%-6d%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n",  staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
		sum1 += staffs[i].jbgz;
		sum2 += staffs[i].zwgz;
		sum3 += staffs[i].jt;
		sum4 += staffs[i].ylbx;
		sum5 += staffs[i].gjj;
		sum6 += staffs[i].sdf;
		sum7 += staffs[i].yfgz;
		sum8 += staffs[i].sfgz;
	}
	AVG1 = sum1 / renum;
	AVG2 = sum2 / renum;
	AVG3 = sum3 / renum;
	AVG4 = sum4 / renum;
	AVG5 = sum5 / renum;
	AVG6 = sum6 / renum;
	AVG7 = sum7 / renum;
	AVG8 = sum8 / renum;
	if ((fp = fopen("AVG0321.txt", "w")) == NULL)
	{
		printf("创建平均值文件夹失败!");
	}
	fprintf(fp,"\n职工号 姓名   基本工资 职务工资  津贴 医疗保险 公积金  水电费  应发工资（总和） 实发工资\n");
	for (i=0; i < renum;i++)
	{
		fprintf(fp,"%-6s%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n",staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	fprintf(fp, "统计结果为：	%-10f%-8f%-7f%-8f%-8f%-12f%-15f%-10f", AVG1, AVG2, AVG3, AVG4, AVG5, AVG6, AVG7, AVG8);
	fclose(fp);
	printf("\n平均值计算成功！");


	if ((fp = fopen("AVG0321.txt", "r")) == NULL)
	{
		printf("职工信息文件打开错误！\n");
		return;
	}
fscanf(fp, "%s%s%s%s%s%s%s%s%s%s\n", staffs[0].xm, staffs[0].xm,staffs[0].xm,staffs[0].xm,staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm);
	printf("\n职工号 姓名   基本工资 职务工资  津贴 医疗保险 公积金  水电费  应发工资（总和） 实发工资\n");
	for (i = 0; i < renum; i++)
	{
		fscanf(fp, "%s%s%d%d%d%d%d%d%d%d\n", staffs[i].zgh, staffs[i].xm, &staffs[i].jbgz, &staffs[i].zwgz,
			&staffs[i].jt, &staffs[i].ylbx, &staffs[i].gjj, &staffs[i].sdf, &staffs[i].yfgz, &staffs[i].sfgz);
		printf("%-6s%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n", staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	printf( "统计结果为：	%-10.2f%-8.2f%-7.2f%-8.2f%-8.2f%-12.2f%-15.2f%-10.2f", AVG1, AVG2, AVG3, AVG4, AVG5, AVG6, AVG7, AVG8);
	printf("\n\n职工信息文件读取成功！\n\n");
	fclose(fp);
}


void main()
{
	     int i;
loop: menu();
		printf("请输入操作编号\n");
		scanf("%d",&i);
		switch(i)
	{
	case 1:One();
		goto loop;
	case 2:Two();
		goto loop;
	case 3:Three();
		goto loop;
    case 4:Four();
		goto loop;
    case 5:Five();
		goto loop;
	case 6:Six();
		goto loop;
	case 7:Seven();
		goto loop;
	case 8:Eight();
		goto loop;
	case 9:Nine();
		goto loop;
	case 10:Ten();
		goto loop;
	case 11:printf("Exist\n");
	} 

}
