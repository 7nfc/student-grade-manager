#include"grade.h"
void search(SCORE*head)
{
	int num0;
	SCORE *p1,*p2;
	printf("请输入你要查找的学生学号：\n");
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
	else
		printf("%6d%20s%10.2f%10.2f%10.2f%10.2f\n",p1->num,p1->name,p1->math,p1->english,p1->computer,p1->average);
		system("pause");
}
