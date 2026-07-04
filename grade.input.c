#include"grade.h"
SCORE *input()
{
	SCORE*p,*head=NULL;
	p=(SCORE*)malloc(LEN);
	printf("请输入学生数据：\n");
	scanf("%d%s%f%f%f",&p->num,p->name,&p->math,&p->english,&p->computer);
	p->average=(p->math+p->english+p->computer)/3;
	while(p->num!=0)
	{
		p->next=head;
		head=p;
		p=(SCORE*)malloc(LEN);
		scanf("%d%s%f%f%f",&p->num,p->name,&p->math,&p->english,&p->computer);
		p->average=(p->math+p->english+p->computer)/3;
	}
	
	free(p);
	return(head);
}
void infile(SCORE*head)
{
	if (head==NULL) return;
	SCORE*p;
	p=head;
	FILE*fp;
	if((fp=fopen("grade.txt","w"))==NULL)
	{
		printf("打开写入文件grade.txt失败\n");
		return;
	}
	while(p)
	{
		fprintf(fp,"%6d %20s %10.2f %10.2f %10.2f %10.2f\n",p->num,p->name,p->math,p->english,p->computer,p->average);
		p=p->next;
	}
	fclose(fp);
}
