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
	
		printf("----------------ְ�����ʹ���ϵͳ------------------\n");
		printf("|         1.ְ����Ϣ¼��                         |\n");
		printf("|         2.ְ���Ų�ѯ                           |\n");
		printf("|         3.������Ϣ��ѯ                         |\n");
		printf("|         4.��������С��1000                     |\n");
		printf("|         5.����ʵ�����ʡ�Ӧ������               |\n");
		printf("|         6.���ְ����Ϣ                         |\n");
		printf("|         7.�޸�ְ����Ϣ                         |\n");
		printf("|         8.ɾ��ְ����Ϣ                         |\n");
		printf("|         9.�������������򣨽���               |\n");
		printf("|         10.��������ƽ��ֵ                  |\n");
		printf("|         11.�˳�ϵͳ                            |\n");
		printf("--------------------------------------------------\n");
	
}
//¼����Ϣ
void One(){

int i=0;
char str[80];
FILE *fp;
    fp=fopen("jy6200335.txt","r");
if(fp==NULL)
  printf("�ļ���ʧ��");
fgets(str,80,fp);                                                                                                                                                      
printf("ְ����	����	��������	ְ����	����	ҽ�Ʊ���	������	ˮ���	Ӧ������	ʵ������\n");
while(!feof(fp))
{
	fscanf(fp,"%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,&staffs[i].jbgz,&staffs[i].zwgz,&staffs[i].jt,&staffs[i].ylbx,&staffs[i].gjj,&staffs[i].sdf,&staffs[i].yfgz,&staffs[i].sfgz);
	printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
	i++;
}
renum=i;
}
//ְ����
void Two(){
	int i=0;
	char num[15];
	int flag=1;
	printf("������ְ����");
    scanf("%s",num);
	for(i=0;i<renum;i++){
if(strcmp(staffs[i].zgh,num)==0)
	{printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
	flag=0;}
}
	if(flag)
printf("���ҵ�ְ���Ų�����\n");
	}

//����
void  Three(){
		int i=0;
	char num[15];
	int flag=1;
	printf("����������");
    scanf("%s",num);
	for(i=0;i<renum;i++){
if(strcmp(staffs[i].xm,num)==0)
	{printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
	flag=0;}
}
	if(flag)
printf("���ҵ�����������\n");
}
//��������С��1000
void Four(){
	{int i;
fflush(stdin);
printf("ְ����	����	��������	ְ����	����	ҽ�Ʊ���	������	ˮ���	Ӧ������	ʵ������\n");
for(i=0;i<renum;i++)
{

if(staffs[i].jbgz<=1000)
{
printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh,staffs[i].xm,staffs[i].jbgz,staffs[i].zwgz,staffs[i].jt,staffs[i].ylbx,staffs[i].gjj,staffs[i].sdf,staffs[i].yfgz,staffs[i].sfgz);
}
}
printf("\n������������Ϣ��ȡ�ɹ�!\n");
return;
}
}

//����ʵ�����ʡ�Ӧ������
void Five(){
		FILE *fp;
	int i;
	if ((fp = fopen("GZ6200335.txt", "w")) == NULL)
	{
		printf("���������ļ���ʧ�ܣ�");
	}
	fprintf(fp, "ְ����	����	��������		ְ����		����	ҽ�Ʊ���		������	ˮ���	Ӧ������		ʵ������\n");
	for (i = 0; i < renum; i++)
	{
		fprintf(fp, "%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
			staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].jbgz + staffs[i].zwgz + staffs[i].jt, staffs[i].jbgz + staffs[i].zwgz + staffs[i].jt
			-staffs[i].ylbx-staffs[i].gjj-staffs[i].sdf);
	}
	fclose(fp);
	printf("\n����д��ɹ�\n!");
}

//���
void  Six(){
	int flag=1;
	int i=0;
	char name[15];
	int jz;
	FILE *fp;
	fp=fopen("jy6200335.txt","a+");
	
	printf("��������ְ����Ϣ��\n");
	printf("ְ����:");
	scanf("%s",name);
	
	for(i=0;i<renum;i++)
	{
	if(strcmp(staffs[i].zgh,name)==0)
	{
	printf("ְ�����Ѵ��ڣ�");
	flag=0;
	}	
	}
	if(flag)
	{
		printf("������ְ����:");
	    scanf("%s",name);
		strcpy(staffs[renum].zgh,name);

		printf("������������");
		scanf("%s",name);
		strcpy(staffs[renum].xm,name);

		printf("������������ʣ�");
		scanf("%d",&jz);
		staffs[renum].jbgz=jz;

		printf("������ְ���ʣ�");
		scanf("%d",&jz);
		staffs[renum].zwgz=jz;

		printf("�����������");
		scanf("%d",&jz);
		staffs[renum].jt=jz;

		printf("������ҽ�Ʊ��գ�");
		scanf("%d",&jz);
		staffs[renum].ylbx=jz;

		printf("�����빫����");
		scanf("%d",&jz);
		staffs[renum].gjj=jz;

       	printf("������ˮ��ѣ�");
		scanf("%d",&jz);
		staffs[renum].sdf=jz;







		
fprintf(fp,"%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[renum].zgh,staffs[renum].xm,staffs[renum].jbgz,staffs[renum].zwgz,staffs[renum].jt,staffs[renum].ylbx,staffs[renum].gjj,staffs[renum].sdf,staffs[renum].yfgz,staffs[renum].sfgz);
	
}
	printf("��ӳɹ�\n");
		fclose(fp);
}


//�޸�
void Seven(){
    
    int n,i;
	char str[10];
     num:
	printf("��������ţ�");
	scanf("%d", &n);
	if (n<1 || n>N)
	{
		printf("��Ŵ������������1-%d", N);
		goto num;
	}

	printf("\n��ѡ�������\nְ����	����	��������	ְ����	����	ҽ�Ʊ���	������	ˮ���	Ӧ������	ʵ������\n");
	printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[n-1].zgh, staffs[n-1].xm, staffs[n-1].jbgz, staffs[n-1].zwgz,
		staffs[n-1].jt, staffs[n-1].ylbx,staffs[n-1].gjj, staffs[n-1].sdf, staffs[n-1].yfgz, staffs[n-1].sfgz);
	printf("������");
	scanf("%s", str);
	strcpy(staffs[n - 1].xm, str);
	printf("�������ʣ�");
	scanf("%d", &i);
	staffs[n- 1].jbgz=i;
	printf("ְ���ʣ�");
	scanf("%d", &i);
	staffs[n - 1].zwgz = i;
	printf("������");
	scanf("%d", &i);
	staffs[n - 1].jt = i;
	printf("ҽ�Ʊ��գ�");
	scanf("%d", &i);
	staffs[n - 1].ylbx = i;
	printf("������");
	scanf("%d", &i);
	staffs[n - 1].gjj = i;
	printf("ˮ��ѣ�");
	scanf("%d", &i);
	staffs[n - 1].sdf = i;

	printf("\n�޸ĺ����ϢΪ��\nְ����	����	��������	ְ����	����	ҽ�Ʊ���	������	ˮ���	Ӧ������	ʵ������\n");
	printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[n - 1].zgh, staffs[n - 1].xm, staffs[n - 1].jbgz, staffs[n - 1].zwgz,
		staffs[n - 1].jt, staffs[n - 1].ylbx, staffs[n - 1].gjj, staffs[n - 1].sdf, staffs[n - 1].yfgz, staffs[n - 1].sfgz);
}
//ɾ��
void Eight(){
FILE *fp;
	int i, j;
	char Name[20] = "";
	int flag= 0;
Loop:
	printf("������������\n");
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
		printf("δ�ҵ����ˣ�\n");
		goto Loop;
	}
	if ((fp = fopen("jy6200335-������ɾ����.txt", "w")) == NULL)
	{
		printf("��������ʧ�� ��");
	}
	printf("ɾ�����״̬Ϊ:\n");
	printf("ְ����	����	��������	ְ����	����	ҽ�Ʊ���	������	ˮ���	Ӧ������	ʵ������\n");
	fprintf(fp,"ְ����	����	��������	ְ����	����	ҽ�Ʊ���	������	ˮ���	Ӧ������	ʵ������\n");
	for (i = 0; i < renum - 1; i++)
	{

			fprintf(fp, "%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
			printf("%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n",staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	fclose(fp);
	printf("ɾ���ɹ���\n");
}
//������������
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
	fprintf(fp, "ְ����	����	��������		ְ����		����	ҽ�Ʊ���		������	ˮ���	Ӧ������		ʵ������\n");
	for(i=0;i<renum;i++)
	{
	fprintf(fp, "%s	%s	%d		%d		%d	%d		%d	%d	%d		%d\n", staffs[i].zgh, staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
				staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	printf("����ɹ�\n");
	fclose(fp);
}

void Ten(){
//�ȶ�ȡ�����ļ�
	FILE *fp;
	int i,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
	double AVG1,AVG2,AVG3,AVG4,AVG5,AVG6,AVG7,AVG8; //ƽ��ֵ
	//��ȡ��Ϣ
	if ((fp = fopen("GZ6200335.txt", "r")) == NULL)
	{
		printf("ְ����Ϣ�ļ��򿪴���\n");
		return;
	}
	fscanf(fp, "%s%s%s%s%s%s%s%s%s%s\n", staffs[0].xm, staffs[0].xm,staffs[0].xm,staffs[0].xm,staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm);
	printf("\nְ���� ����   �������� ְ����  ���� ҽ�Ʊ��� ������  ˮ���  Ӧ�����ʣ��ܺͣ� ʵ������\n");
	for (i = 0; i < renum; i++)
	{
		fscanf(fp, "%s%s%d%d%d%d%d%d%d%d\n", staffs[i].zgh, staffs[i].xm, &staffs[i].jbgz, &staffs[i].zwgz,
			&staffs[i].jt, &staffs[i].ylbx, &staffs[i].gjj, &staffs[i].sdf, &staffs[i].yfgz, &staffs[i].sfgz);
		printf("%-6s%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n", staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	printf("\n\nְ����Ϣ�ļ���ȡ�ɹ���\n\n");
	fclose(fp);
	printf("\nְ���� ����   �������� ְ����  ���� ҽ�Ʊ��� ������  ˮ���  Ӧ�����ʣ��ܺͣ� ʵ������\n");
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
		printf("����ƽ��ֵ�ļ���ʧ��!");
	}
	fprintf(fp,"\nְ���� ����   �������� ְ����  ���� ҽ�Ʊ��� ������  ˮ���  Ӧ�����ʣ��ܺͣ� ʵ������\n");
	for (i=0; i < renum;i++)
	{
		fprintf(fp,"%-6s%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n",staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	fprintf(fp, "ͳ�ƽ��Ϊ��	%-10f%-8f%-7f%-8f%-8f%-12f%-15f%-10f", AVG1, AVG2, AVG3, AVG4, AVG5, AVG6, AVG7, AVG8);
	fclose(fp);
	printf("\nƽ��ֵ����ɹ���");


	if ((fp = fopen("AVG0321.txt", "r")) == NULL)
	{
		printf("ְ����Ϣ�ļ��򿪴���\n");
		return;
	}
fscanf(fp, "%s%s%s%s%s%s%s%s%s%s\n", staffs[0].xm, staffs[0].xm,staffs[0].xm,staffs[0].xm,staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm, staffs[0].xm);
	printf("\nְ���� ����   �������� ְ����  ���� ҽ�Ʊ��� ������  ˮ���  Ӧ�����ʣ��ܺͣ� ʵ������\n");
	for (i = 0; i < renum; i++)
	{
		fscanf(fp, "%s%s%d%d%d%d%d%d%d%d\n", staffs[i].zgh, staffs[i].xm, &staffs[i].jbgz, &staffs[i].zwgz,
			&staffs[i].jt, &staffs[i].ylbx, &staffs[i].gjj, &staffs[i].sdf, &staffs[i].yfgz, &staffs[i].sfgz);
		printf("%-6s%-10s%-10d%-8d%-7d%-8d%-8d%-12d%-15d%-10d\n", staffs[i].zgh,staffs[i].xm, staffs[i].jbgz, staffs[i].zwgz,
		staffs[i].jt, staffs[i].ylbx, staffs[i].gjj, staffs[i].sdf, staffs[i].yfgz, staffs[i].sfgz);
	}
	printf( "ͳ�ƽ��Ϊ��	%-10.2f%-8.2f%-7.2f%-8.2f%-8.2f%-12.2f%-15.2f%-10.2f", AVG1, AVG2, AVG3, AVG4, AVG5, AVG6, AVG7, AVG8);
	printf("\n\nְ����Ϣ�ļ���ȡ�ɹ���\n\n");
	fclose(fp);
}


void main()
{
	     int i;
loop: menu();
		printf("������������\n");
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
