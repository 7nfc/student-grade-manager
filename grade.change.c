#include"grade.h"
void change(SCORE*head)
{
	int a,num0;
	float c,d,e;
	char f[30];
	SCORE*p1,*p2;
	printf("请输入你要修改的学生的学号：\n");
	scanf("%d",&num0);
	
	if(head==NULL)
	{
		printf("\nlist null!\n");
		return;
	}
	p1=head;
	p2=NULL;
	
	while(p1!=NULL&&num0!=p1->num)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1==NULL)
	{
		printf("没有此学号\n");
		system("pause");
		return;
	}
	printf("请输入您想要更改的信息类型：\n");
	printf("学号-1 姓名-2 数学-3 外语-4 计算机-5:\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
				printf("请输入更改后的学号：\n");
				scanf("%d",&num0);
				p1->num=num0;
				break;
		case 2:
				printf("请输入更改后的姓名：\n");
				scanf("%s",f);
				strcpy(p1->name,f);
				break;
		case 3:
				printf("请输入更改后的数学成绩：\n");
				scanf("%f",&c);
				p1->math=c;
				p1->average=(p1->math+p1->english+p1->computer)/3;
				break;
		case 4:
				printf("请输入更改后的外语成绩：\n");
				scanf("%f",&d);
				p1->english=d;
				p1->average=(p1->math+p1->english+p1->computer)/3;
				break;
		case 5:
				printf("请输入更改后的计算机成绩：\n");
				scanf("%f",&e);
				p1->computer=e;
				p1->average=(p1->math+p1->english+p1->computer)/3;
				break;
		default:
				printf("enter data error\n");
	}
	printf("修改后的数据为:\n");
	show(head);
	infile(head);
}
