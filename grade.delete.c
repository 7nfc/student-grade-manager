#include"grade.h"
void del(SCORE*head)
{
	int num0;
	SCORE *p1,*p2;
	printf("请输入你要删除的学生学号：\n");
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
	//创建临时指针以展示
	SCORE*tempHead=head;
	if(p1==head)
		head=p1->next;
	else 
		{
		p2->next=p1->next;
		tempHead=head;
		}
	free(p1);
	printf("已删除\n");
	
	show(tempHead);
	infile(head);
}
